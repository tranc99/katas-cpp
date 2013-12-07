/*
 *  specialmembers.cpp
 *  
 *
 *  Created by Ten Mutunhire on 12/7/13.
 *  Copyright 2013 Colby College. All rights reserved.
 *
 */

#include "specialmembers.h"

class Example {
public:
	int total;
	void accumulate(int x) { total += x; }
	~Example () {};
};

int main()
{
	Example ex;
}

