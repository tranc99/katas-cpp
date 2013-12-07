/*
 *  sockets.cpp
 *  
 *
 *  Created by Ten Mutunhire on 12/7/13.
 *  Copyright 2013 Colby College. All rights reserved.
 *
 */

#include "sockets.h"
#include <iostream>
#include <cstring>
#include <sys/socket.h>
#include<netdb.h>

int main()
{
	int status;
	struct addrinfo host_info;
	struct addrinfo *host_info_list;
	
	memset(&host_info, 0, sizeof host_info);
	
	std::cout << "Setting up the structs..." << std::endl;
	
	host_info.ai_family = AF_UNSPEC;
	host_info.ai_socktype = SOCK_STREAM;
	
	status = getaddrinfo("www.google.com", "80", &host_info, &host_info_list);
	if (status != 0) std::cout << "getaddrinfo error" << gai_strerror(status);
	
	//connect to a server
	std::cout << "Creating a socket..." << std::endl;
	int socketfd ;
	socketfd = socket(host_info_list->ai_family, host_info_list->ai_socktype,
					  host_info_list->ai_protocol);
	if (socketfd == -1) std::cout << "socket error ";
	
	std::cout << "Connecting... " << std::endl;
	status = connect(socketfd, host_info_list->ai_addr, host_info_list->ai_addrlen);
	if (status == -1) std::cout << "connect error";
	
	//send messages
	std::cout << "sending message..." << std::endl;
	char *msg = "GET / HTTP/1.1\nhost: www.google.com\n\n";
	int len;
	ssize_t bytes_sent;
	len = strlen(msg);
	bytes_sent = send(socketfd, msg, len, 0);
	
	
	std::cout << "Waiting to receive data..." << std::endl;
	
	ssize_t bytes_received;
	char incoming_data_buffer[1000];
	bytes_received = recv(socketfd, incoming_data_buffer, 1000, 0);
	
	if(bytes_received == 0) std::cout << "host shut down." << std::endl;
	if(bytes_received == -1) std::cout << "receive error!" << std::endl;
	std::cout << bytes_received << " bytes received: " << std::endl;
	std::cout << incoming_data_buffer << std::endl;
	
	std::cout << "Receiving complete. Closing socket..." << std::endl;
	freeaddrinfo(host_info_list);
	close(socketfd);
	
}
