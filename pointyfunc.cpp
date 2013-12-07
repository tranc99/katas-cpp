/*
 *  pointyfunc.cpp
 *  
 *
 *  Created by Ten Mutunhire on 12/2/13.
 *  Copyright 2013 Colby College. All rights reserved.
 *
 */

#include "pointyfunc.h"
#include<iostream>
#include "string"

using namespace std;

/*
bool fibon_elem(int pos, int &elem)
{
	const vector<int> *pseq = fibon_seq(pos);
	
	if (! pseq)
	{	elem = 0; return false;	}
	
	elem = (*pseq)[pos-1];
	return true;
}


const vector<int>* (*seq_ptr)(int);
*/


enum ns_type {
	ns_fibon, ns_lucas, ns_pell,
	ns_triang, ns_square, ns_pent
};

int main()
{
	cout << ns_pent << endl;
	bark();
}

void bark()
{
	cout << "\nwoof, woof\n";
}