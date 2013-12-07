/*
 *  overloading.cpp
 *  
 *
 *  Created by Ten Mutunhire on 11/27/13.
 *  Copyright 2013 Colby College. All rights reserved.
 *
 */

#include "overloading.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;


template <typename elemType>
void display_message(const string &msg, const vector<elemType> &vec)
{
	cout << msg;
	for (int ix = 0; ix < vec.size(); ++ix)
	{
		elemType t = vec[ix];
		cout << t << ' ';
	}
}


int main()
{
	vector<int> vec;
	vec.push_back(6);
	vec.push_back(9);
	vec.push_back(11);
	string msg = "hello";
	display_message(msg, vec);
	return 0;
}