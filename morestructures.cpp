/*
 *  morestructures.cpp
 *  
 *
 *  Created by Ten Mutunhire on 12/6/13.
 *  Copyright 2013 Colby College. All rights reserved.
 *
 */
//pointers to structures
#include "morestructures.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct movies_t {
	string title;
	int year;
};

int main()
{
	string mystr;
	
	movies_t amovie;
	movies_t * pmovie;
	pmovie = &amovie;
	
	cout << "Enter title: ";
	getline(cin, pmovie->title);
	cout << "Enter year: ";
	getline(cin, mystr);
	(stringstream) mystr >> pmovie->year;
	
	cout << "\nYou have entered:\n";
	cout << pmovie->title;
	cout << " (" << pmovie->year << ")\n";
	
	return 0;
}

struct nestmovie {
	string title;
	int year;
};

struct friends_t {
	string name;
	string email;
	nestmovie favorite_movie;
} charlie, maria;
