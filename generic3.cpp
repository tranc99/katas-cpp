/*
 *  generic3.cpp
 *  
 *
 *  Created by Ten Mutunhire on 12/2/13.
 *  Copyright 2013 Colby College. All rights reserved.
 *
 */

#include "generic3.h"
#include<vector>
#include<iostream>

using namespace std;

int* find(vector<int> &vec, int value)
{
	for(int ix = 0; ix < vec.size(); ++ix) {
	
		if (vec[ix] ==value) {
			return &vec[ix];
		}
	}
	return 0;
}



template <typename elemType>
elemType* find2(vector<elemType> &vec, const elemType &value)
{
	cout << "\nUsing find2() \n";
	for(int ix = 0; ix < vec.size(); ++ix) {
		
		if (vec[ix] ==value) {
			return &vec[ix];
		}
	}
	return 0;
}

void execFind()
{
	cout << "\nUsing original find()\n";
	vector<int> vec1(4,100);
	int* location = &vec1[1];
	cout << location << "element address in vector" << "\treturned address: ";
	int* intResult = find(vec1, 100);
	cout << intResult << endl;
}

void execFind2()
{
	cout << "\nUsing find2()\n";
	vector<double> vec1(4,2.0);
	double* location = &vec1[1];
	cout << location << "\telement address in vector" << "\treturned address: ";
	double* intResult = find2(vec1, 2.0);
	cout << intResult << endl;
}

int main()
{
	execFind2();
}