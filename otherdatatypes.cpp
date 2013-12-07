/*
 *  otherdatatypes.cpp
 *  
 *
 *  Created by Ten Mutunhire on 12/6/13.
 *  Copyright 2013 Colby College. All rights reserved.
 *
 */

#include "otherdatatypes.h"
#include <iostream>
using namespace std;

typedef char C;
C it = 'h';

union mytypes_t {
	char c;
	int i;
	float f;
} mytypes;

union mix_t {
	int l;
	struct {
		short hi;
		short lo;
	} s;
	char c[4];
} mix;

int main4()
{
	mix.l = 5;
	cout << mix.l;
	cout << endl;
	cout << mix.s.hi;
}

int main3()
{
	mytypes.i = 5;
	cout << mytypes.f;
	cout << endl;
	return 0;
}

int main2()
{

	cout << it;
	cout <<endl;
	cout << endl;
	return 0;
}

enum colors_t {
	black, blue, green
};

colors_t mycolor;

enum class Colors : char {
	black, blue, green
};

int main()
{
	mycolor = blue;
	cout << mycolor;
	cout << "That was plain c type enum, silly\n";
	Colors::blue = 'b';
	newcolor = Colors::blue;
	cout << newcolor;
	
}