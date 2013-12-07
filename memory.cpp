/*
 *  memory.cpp
 *  
 *
 *  Created by Ten Mutunhire on 11/26/13.
 *  Copyright 2013 Colby College. All rights reserved.
 *
 */

#include "memory.h"
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void bubble_sort(vector<int> &vec, ofstream &ofil);

int main()
{
	
	
	int *pi;
	cout << "\nassigning...\n";
	pi = new int;
	
	pi = new int(1024);
	
	int *pia = new int[24];
	
	cout << "\ndeleting...\n";
	delete pi;
	
	delete [] pia;
	cout << "\n...done.\n\n";
	
	int ia[5] = { 5, 4, 1, 2, 8};
	vector<int> vec(ia, ia+5);
	
	ofstream ofil("memoryoutput.txt");
	
	bubble_sort(vec, &ofil);
}

void bubble_sort(vector<int> &vec, ofstream *ofil = 0)
{
	for(int ix = 0; ix < vec.size(); ++ix)
		for (int jx = ix+1; jx < vec.size(); ++jx)
			if (vec[ix] > vec[jx])
			{
				if (ofil != 0)
				ofil << "about to call swap! ix: " << ix
						<< " jx: " << jx << "\tswapping: "
				<< vec[ix] << " with " << vec[jx] << endl;
				swap(vec[ix], vec[jx], ofil);
			}
}

