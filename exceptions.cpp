/*
 *  exceptions.cpp
 *  
 *
 *  Created by Ten Mutunhire on 12/7/13.
 *  Copyright 2013 Colby College. All rights reserved.
 *
 */

#include "exceptions.h"
#include<iostream>
using namespace std;

int main()
{
	try {
		throw 20;
	}
	catch (int e) {
		cout << "spiffy exception occured.: " << e << '\n';
	}
	return 0;
}
