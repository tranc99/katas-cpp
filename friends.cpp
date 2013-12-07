/*
 *  friends.cpp
 *  
 *
 *  Created by Ten Mutunhire on 12/7/13.
 *  Copyright 2013 Colby College. All rights reserved.
 *
 */

#include "friends.h"
#include<iostream>
using namespace std;

class Rectangle {
	int width, height;
public:
	Rectangle() {}
	Rectangle (int x, int y): width(x), height(y) {}
	int area() { return width * height; }
	friend Rectange duplicate (const Rectangle&);
};

Rectangle duplicate (const Rectangle& param)
{
	Rectangle res;
	res.width = param.width*2;
	res.height = param.height*2;
	return res;
}

int main() {
	Rectangle foo;
	Rectangle bar(2, 3);
	foo = duplicate(bar);
	cout << foo.area() << '\n';
	return 0;
}