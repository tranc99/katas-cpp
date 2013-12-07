/*
 *  pointerarithmetic.cpp
 *  
 *
 *  Created by Ten Mutunhire on 12/4/13.
 *  Copyright 2013 Colby College. All rights reserved.
 *
 */

#include "pointerarithmetic.h"


template <typename elemType>
elemType* find(const elemType *first, int size, const elemType *sentinel, const elemType &value);


elemType* find(const elemType *array, int size, const elemType &value)
{
	if (! array || size < 1)
		return 0;
	
	for (int ix = 0; ix < size; ++ix)
		if (array[ix] == value)
			return &array[ix];
	return 0;
}






int min(int *array)
{
	
}
