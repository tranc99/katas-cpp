/*
 *  datastructures.cpp
 *  
 *
 *  Created by Ten Mutunhire on 12/5/13.
 *  Copyright 2013 Colby College. All rights reserved.
 *
 */

#include "datastructures.h"
#include<iostream>
using namespace std;

#define HEIGHT 3

void printarray(int arg[], int length)
{
	for (int n=0; n<length; n++)
		cout << arg[n] << " ";
	cout << "\n";
}

int mainfirst()
{
	int billy[5];
	cout << billy[3];
	int silly [5] = { 16, 2, 77, 40, 12071 };
	cout << endl << silly[3] << endl;
	//HEIGHT = 3;
	cout << endl << HEIGHT;
}

int main()
{
	int firstarray[] = { 5, 10, 15};
	int secondarray[] = { 2, 4, 6, 8, 10};
	printarray(firstarray, 3);
	printarray(secondarray, 5);
	return 0;
}