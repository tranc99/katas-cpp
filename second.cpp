/*
 *  second.cpp
 *  
 *
 *  Created by Ten Mutunhire on 11/20/13.
 *  Copyright 2013 Colby College. All rights reserved.
 *
 */

//#include "second.h"

#include<iostream>
#include <string>
#include <complex>

using namespace std;

int main()
{
	
	string user_name;
	
	int usr_val;
	
	int num_tries = 0, num_right = 0;
	
	//complex<double> purei(0, 7);
	
	double usr_score = 0.0;
	
	char usr_more;
	cout << "Try another sequence? Y/N? ";
	cin >> usr_more;
	
	bool go_for_it = true;
	
	//constant
	const int max_tries = 3;
	const double pi = 3.14159;

	//arithmetic
	cout << "\n doin math\n";
	int sumOne = 5 + 6;
	cout << sumOne;
	sumOne -= 8;
	cout << "\n" << sumOne;
	sumOne = sumOne * 5;
	cout << "\n" << sumOne;
	sumOne = sumOne / 6;
	cout << "\n" << sumOne;
	int moduless = sumOne % 2;
	cout << "\n" << moduless;
	
	int tries = 1;
	cout << "are you ready for try #"
		<< ++tries << "?\n";
	
	bool user_more = true;
	char usr_rsp;
	
	cout << "\nContinue Y/N?\n";
	cin >> usr_rsp;
	if (usr_rsp == 'N')
		usr_more = false;
	else 
	if (usr_rsp == 'n')	
		(usr_more == 'n')

	cout << "\nyou chose to continue: " << usr_more;
	
	bool testBoole = false;
	cout << "\n new false bool\n" << testBoole;
	
	if (usr_guess == next_elem)
	{
		cout << "correct guess";
	}
	else 
	{
		
	}
	
	
	switch(num_Tries)
	{
			
		case 1:
			cout << "Oops! Nice guess but not it\n";
			break;
		
		case 2:
			cout << "Hmm, Master Baggins is wrong again.\n";
			break;
		
		default:
			cout << "It must be getting pretty frustrating by now!\n";
			break;
	}
	
	
	while (next_seq == true)
	{
		continue; 
	}
	
}



