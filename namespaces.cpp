/*
 *  namespaces.cpp
 *  
 *
 *  Created by Ten Mutunhire on 12/7/13.
 *  Copyright 2013 Colby College. All rights reserved.
 *
 */

#include "namespaces.h"
#include<iostream>
using namespace std;

namespace myNamespace
{
	int a = 5, b = 10;
}

int main()
{
	myNamespace::a = 20;
	myNamespace::b = 5;
	cout << myNamespace::a;
}