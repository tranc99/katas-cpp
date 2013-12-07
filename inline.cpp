/*
 *  inline.cpp
 *  
 *
 *  Created by Ten Mutunhire on 11/26/13.
 *  Copyright 2013 Colby College. All rights reserved.
 *
 */

#include "inline.h"

bool is_size_ok(int size)
{
	const int max_size = 1024;
	if (size <= 0 || size > max_size)
	{
		cerr << "oops: requested size is not supported : "
			 << size << " -- can't fulfill request. \n";
		return false;
	}
}

//calculate up to size elements of Fibonacci sequence
//return address of static container holding elements
const vector<int> *fibon_seq(int size)
{
	static vector<int> elems;
	if (! is_size_ok(size))
		return 0;
	
	for (int ix = elems.size(); ix < size; ++ix)
		if (ix == 0 || ix == 1)
			elems.push_back(1)
			else elems.push_back(elems[ix-1] + elems[ix-2]);
	return &elems;
}

//returns the Fibonacci element at position pos

inline bool fibon_elem(int pos, int &elem)
{
	const vector<int> *pseq = fibon_seq(pos);
	
	if (! pseq)
	{	elem = 0; return false; }
	
	elem = (*pseq)[pos-1];
	return true;
}
