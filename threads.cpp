/*
 *  threads.cpp
 *  
 *
 *  Created by Ten Mutunhire on 12/7/13.
 *  Copyright 2013 Colby College. All rights reserved.
 *
 */

#include "threads.h"
#include<iostream>
#include<thread>
//using namespace std;

void foo()
{
	std::cout << "\nprinting coll stuff in foo\n";
}

void bar(int x)
{
	for
		std::cout << "\nprinting coll stuff in bar\n";
}

int main()
{
	std::thread first (foo);
	std::thread second (bar, 0);
	std::cout << "\nmain, foo and bar now execute concurrently...\n";
	first.join();
	second.join();
	
	std::cout << "\nfoo and bar completed.\n";
	return 0;
}