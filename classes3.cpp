/*
 *  classes3.cpp
 *  
 *
 *  Created by Ten Mutunhire on 12/7/13.
 *  Copyright 2013 Colby College. All rights reserved.
 *
 */

#include "classes3.h"
#include<iostream>
using namespace std;
class Dummy {
public:
	int isitme (Dummy& param);
};

int Dummy::isitme(Dummy& param)
{
	if (&param == this) return true;
	else return false;
}

int main1()
{
	Dummy a;
	Dummy* b = &a;
	if ( b->isitme(a) )
		cout << "yes, it's me, silly\n";
	return 0;
}


class MyClass {
public:
	int x;
	MyClass(int val) : x(val) {}
	int get() { return x; }
};

int main()
{
	const MyClass foo(10);
	//foo.x = 20;
	return 0;
}