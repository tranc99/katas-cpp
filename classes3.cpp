/*
 *  classes3.cpp
 *  
 *
 *  Created by Ten Mutunhire on 12/7/13.
 *  Copyright 2013 Colby College. All rights reserved.
 *
 */

#include "classes3.h"
#include<iostream>

class Dummy {
public:
	int isitme (Dummy& param);
};

int Dummy::isitme(Dummy& param)
{
	if (&param == this) return true;
	else return false;
}

