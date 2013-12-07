/*
 *  third.cpp
 *  
 *
 *  Created by Ten Mutunhire on 11/22/13.
 *  Copyright 2013 Colby College. All rights reserved.
 *
 */

//#include "third.h"


#include<iostream>
#include <string>
#include <complex>
#include <vector>
#include <cstdlib>

using namespace std;

int main()
{
	const int seq_size = 18;
	int pell_seq[seq_size];

	vector<int> pell_seq2(seq_size);
	
	pell_seq2[0] = 1;
	pell_seq2[1] = 2;
	
	for (int ix = 2; ix < seq_size; ++ix) 
	{
		
		pell_seq2[ix] = pell_seq2[ix-2] + 2*pell_seq2[ix-1];
		cout << pell_seq2[ix-2] << "\n";
	}
	
	int ival = 1024;
	int *pi = 0;//&ival;
	ival; 
	cout << "\naddress of ival: " << &ival << "object through pointer " << *pi;
	
	vector<int> fibonacci, lucas, pell, trianglular, square, pentagonal;
	
	vector *pv = 0;
	pv = &fibonacci;
	
	const int seq_cnt = 6;
	
	vector<int> *seq_addrs[seq_cnt] = {
		&fibonacci, &lucas, &pell,
		&trianglular, &angular, &pentagonal
	};
	
	vector<int> *current_vec = 0;
	
	for (int ix = 0; ix < seq_cnt; ++ix)
	{
		current_vec = seq_addrs[ix];
	}
	
	srand(seq_cnt);
	seq_index = rand() % seq_cnt;
	current_vec = seq_addrs[seq_index];
	
	if (! fibonacci.empty() && (fibonacci[1] == 1)) {
		
		cout << "do the same through pointer";
		if (pv && ! pv->empty()  && ((*pv[1] == 1));
	}
}




