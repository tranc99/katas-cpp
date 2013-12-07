/*
 *  hexstr.cpp
 *  
 *
 *  Created by Ten Mutunhire on 12/7/13.
 *  Copyright 2013 Colby College. All rights reserved.
 *
 */

#include "hexstr.h"
#include <iostream>     // std::cout, std::dec, std::hex, std::oct

int main () {
	int n = 70;
	std::cout << std::dec << n << '\n';
	std::cout << std::hex << n << '\n';
	std::cout << std::oct << n << '\n';
	return 0;
}

