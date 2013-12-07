/*
 *  first.cpp
 *  
 *
 *  Created by Ten Mutunhire on 11/20/13.
 *  Copyright 2013 Colby College. All rights reserved.
 *
 */

#include "first.h"
#include <iostream>
#include <string>

//using std::cout;
using namespace std;
int main()
{
	cout << "Please enter your first name: ";
	
	string user_name;
	
	cin >> user_name;
	
	cout << '\n';
	
	cout << "Hello, ";
	
	cout << user_name;
	
	cout << " ... and goodbye!\n";
	
	cout << 3 + 4;
	
	cout << '\n'
		 << "Hello, "
		 << user_name << "...and goodday!\n";
	
	return 0;
	
}

