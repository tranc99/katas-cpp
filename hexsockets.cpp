/*
 *  hexsockets.cpp
 *  
 *
 *  Created by Ten Mutunhire on 12/7/13.
 *  Copyright 2013 Colby College. All rights reserved.
 *
 */

#include "hexsockets.h"
#include <iostream>
#include <cstring>
#include <sys/socket.h>
#include<netdb.h>

char const hex[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A',   'B','C','D','E','F'};

std::string byte_2_str(char* bytes, int size) {
	std::string str;
	for (int i = 0; i < size; ++i) {
		const char ch = bytes[i];
		str.append(&hex[(ch  & 0xF0) >> 4], 1);
		str.append(&hex[ch & 0xF], 1);
	}
	return str;
}

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
	
	//print buffer array
	//std::cout << incoming_data_buffer << std::endl;
	//print array in hex, but first, give address
	char* arrayBytes = incoming_data_buffer;
	std::cout << "address of char array: \n";
	std::cout << &arrayBytes;
	
	std::string arraystringhex = byte_2_str(arrayBytes, 1000);
	//print array string in hex
	std::cout << "Now, string of response in hex: \n";
	std::cout << arraystringhex;
	std::cout << std::endl;
	
	std::cout << "Receiving complete. Closing socket...\n";
	freeaddrinfo(host_info_list);
	close(socketfd);
	
}

