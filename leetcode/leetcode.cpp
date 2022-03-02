//
//  leetcode.cpp
//  algo_ds
//
//  Created by Sameer Ali on 3/1/22.
//

#include "leetcode.h"

void leetcode35() {
	// 35. Search Insert Position
	// https://leetcode.com/problems/search-insert-position/
	// Mar 1 3:30a
	
	SearchInsertPosition si;
	
	// TEST CASE 1
	vector<int> q35_1 = {1,3,5,6};
	assert(si.searchInsert(q35_1, 5) == 2); // answer: 2
	assert(si.searchInsert(q35_1, 2) == 1); // answer: 1
	assert(si.searchInsert(q35_1, 7) == 4); // answer: 4
	assert(si.searchInsert(q35_1, 0) == 0); // answer: 4 (edge case)
	
	// TEST CASE 2
	vector<int> q35_2 = {3,4};
	assert(si.searchInsert(q35_2, 3) == 0); // answer: 0
	assert(si.searchInsert(q35_2, -10) == 0); // answer: 0
	assert(si.searchInsert(q35_2, 5) == 2); // answer: 0
	
	// BUG 1
	vector<int> q35_3 = {1,3,5};
	assert(si.searchInsert(q35_3, 1) == 0); // answer: 0
} // leetcode35()

void leetcode2089() {
	FindTargetIndicesSortedArray fi;
	
	// TEST CASE 1
	vector<int> q2089_1 = {1,2,5,2,3};
	
	vector<int> t1a = {1,2};
	assert(fi.findIndices(q2089_1, 2) == t1a); // answer: 1,2
	vector<int> t1b = {3};
	assert(fi.findIndices(q2089_1, 3) == t1b);
	
	// TEST CASE 2
}

int main(void) {
	
//	leetcode35();
	leetcode2089();
	
	
	return 0;
}
