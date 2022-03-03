//
//  helper.h
//  algo_ds
//
//  Created by Sameer Ali on 3/1/22.
//

#ifndef helper_h
#define helper_h

#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <utility>

using namespace std;

// Verifies whether the target was found using a search result and prints
// useful information
const void verify(int result) {
	if (result == -1) {
		cout <<"Target not found\n";
	}
	else {
		cout <<"Target found at index position: "<<result<<"\n";
	}
} // verify(INT)

const void verify(bool result) {
	if (result == false) {
		cout <<"Target not found\n";
	}
	else {
		cout <<"Target found: "<<result<<"\n";
	}
} // verify(BOOL)

ostream& operator<<(ostream &out, vector<int> &input) {
	for (auto &index : input) { cout << index<<" "; }
	return out;
} // VECTOR PRINTING

ostream& operator<<(ostream &out, int *arr) {
	int arr_size = sizeof(arr)/sizeof(arr[0]);
	for (int i = 0; i < arr_size; i++) { cout <<i<<" "; }
	
	return out;
} // ARRAY PRINTING

#endif /* helper_h */
