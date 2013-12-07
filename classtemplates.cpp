/*
 *  classtemplates.cpp
 *  
 *
 *  Created by Ten Mutunhire on 12/7/13.
 *  Copyright 2013 Colby College. All rights reserved.
 *
 */

#include "classtemplates.h"
#include<iostream>
using namespace std;

template<class T>
class mypair {
	
public:
	T values [2];
	mypair (T first, T second)
	{
		values[0] = first; values[1] = second;
	}
};

int main()
{
	
	mypair<int> myobject(115, 36);
	cout << myobject.values[0];
}
