/*
 *  procedural.cpp
 *  
 *
 *  Created by Ten Mutunhire on 11/22/13.
 *  Copyright 2013 Colby College. All rights reserved.
 *
 */

#include "procedural.h"
#include <cstdlib>
#include<iostream>

using namespace std;
/*
 *procedural programming here
 */
 
bool fibonacci_element(int position, int &elem);

bool fibonacci_element(int position, int &elem)
{
	//validation
	if (position <= 0 || position > 1024)
	{
		cout << "\nterminator error\n";
		elem = 0;
		return false;
	}
	
	elem = 1; // holds return value  
	int n_2 = 1, n_1 = 1;  
	for (int ix = 3; ix <= position; ++ix)  
	{  
		elem = n_2 + n_1;  
		n_2 = n_1; n_1 = elem;  
		
		//print n-1 elements to a line
		int other = ix - 2;
		cout << n_2 << endl;
	}  
	return true;
}


void print_msg(ostream &os, const string &msg)
{
	if (msg.empty())
		return;
	
	os << msg;
}

int main(int[] args)
{
	int n = args[1];
	int elem;
	if (fibonacci_element(n, elem))
	cout << "\nelement # " << n << " is " << elem << endl;
	cout << "\ndone";
}

