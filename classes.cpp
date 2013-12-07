/*
 *  classes.cpp
 *  
 *
 *  Created by Ten Mutunhire on 12/6/13.
 *  Copyright 2013 Colby College. All rights reserved.
 *
 */

#include "classes.h"
#include<iostream>
using namespace std;

class Rectangle {
		int width, height;
	public:
	Rectangle (int, int);
		void set_values(int, int);
		int area () { return width*height; };
};

Rectangle rect(0, 0);

//Constructor
Rectangle::Rectangle( int a, int b)
{
	width = a;
	height = b;
}

void Rectangle::set_values(int x, int y) 
{
	width = x;
	height = y;
}

int main1()
{
	
	rect.set_values(3, 4);
	int myarea = rect.area();
	cout << "area: " << rect.area();
	
	return 0;
}

int main()
{
	Rectangle rectb(3, 4);
	Rectangle rectc(5, 6);
	cout << "rectb area: " << rectb.area() << endl;
	cout << "rectc area: " << rectc.area() << endl;
	return 0;
}
