/*
 *  sorting.cpp
 *  
 *
 *  Created by Ten Mutunhire on 11/23/13.
 *  Copyright 2013 Colby College. All rights reserved.
 *
 */

#include "sorting.h"
#include <vector>
#include <iostream>

using namespace std;

void display(vector<int> vec)
{
	for (int ix = 0; ix < vec.size(); ++ix)
		cout << vec[ix] << ' ';
	cout << endl;
}

void swap(int &val1, int &val2)
{
	int temp = val1;
	val1 = val2;
	val2 = temp;
	
}

//ofstream ofil("text_out1");
void bubble_sort(vector<int> &vec)
{
	for (int ix = 0; ix < vec.size(); ++ix)
		for (int jx = ix + 1; jx < vec.size(); ++jx) {
			
		
			if (vec[ix] > vec[jx]) {
				
			
				//debugging output
				/* cout << "about to call swap!"
					<< " ix: " << ix << " jx: " << jx << '\t'
				<< "swapping: " << vec[ix]; */
				
				swap(vec[ix], vec[jx]);
			}
		}
}

int main()
{
	int ia[8] = { 8, 34, 3, 13, 1, 21, 5, 2};
	vector<int> vec(ia, ia+8);
	
	cout << "vector before sort: ";
	display(vec);
	
	bubble_sort(vec);
	
	cout << "vector after sort: ";
	
	display(vec);
	
}


