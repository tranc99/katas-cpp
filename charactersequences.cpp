/*
 *  charactersequences.cpp
 *  
 *
 *  Created by Ten Mutunhire on 12/5/13.
 *  Copyright 2013 Colby College. All rights reserved.
 *
 */

#include "charactersequences.h"
#include<iostream>
using namespace std;

int main3()
{
	string mystring;
	char myntcs[] = "some text";
	mystring = myntcs;
	cout << mystring;
	return 0;
}

int main2()
{
	char question[] = "Please, enter your first name: ";
	char greeting[] = "Hello, ";
	char yourname[80];
	cout << question;
	cin >> yourname;
	cout << greeting << yourname << "!";
	return 0;
}

int main1()
{
	
	
	//char jenny[12];
	char myword[] = { 'H', 'e', 'l', 'l', 'o', '\0' };
	char jenny[] = "Broke loose";
	cout << jenny << endl;
	cout << myword << endl;
	return 0;
}

int main()
{
	main3();
}