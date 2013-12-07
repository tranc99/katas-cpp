/*
 *  fourth.cpp
 *  
 *
 *  Created by Ten Mutunhire on 11/22/13.
 *  Copyright 2013 Colby College. All rights reserved.
 *
 */

#include "fourth.h"

#include<iostream>
#include <string>
#include <complex>
#include <fstream>
#include<string>

using namespace std;

int main()
{
	cout << "writing files...\n";
	
	string user_name = "Blinky Bill";
	
	int usr_val;
	
	int num_tries = 5, num_right = 2;
	
	
	
	ofstream outfile("tendata.txt", ios_base::app);
	
	if (! outfile)
		cerr << "Oops! Unable to save session data!\n";
	else
		outfile << "\n" << user_name << ' '
				<< num_tries << ' '
				<< num_right << endl;
	
	cout << "\nnow let's read in the files from before" << endl;
	
	ifstream infile("tendata.txt");
	num_tries = 0;
	int num_correct = 0;
	
	if (! infile)
	{
		cerr << "\failed\n";
		
	}
	else
	{
		string name;
		string nt;
		string nc;
		
		while (infile >> name)
		{
			infile >> nt >> nc;
			if (name == "junior") 
			{
				cout << "\nYou must be Blinky Bill!"
				<< "\n a fine " << nt << ' ' << nc << endl;
			}
		}
	}
	
}

