//
//  main.cpp
//  algo_ds
//
//  Created by Sameer Ali on 3/1/22.
//

#include "helper.h"
#include "algorithms/linear_binary_search.h"
#include "data_structures/singly_linked_list.h"

void linearBS() {
	linearBinarySearch lBS;

	vector<int> sorted {1,2,3,4,5,6,7,8,9,10};
	vector<int> unsorted {3,5,7,10,9,2,1,4,6,8};
	
	vector<int> itBS_bug1 = {-1,0,3,5,9,12};
	vector<int> itBS_bug2 = {5};
	
	vector<int> mid_print {-1, 0, 1, 2};
	
	cout <<"Linear Search\n";
	assert(lBS.linear_search(sorted, 3) == 2);
	assert(lBS.linear_search(sorted, 12) == -1);
	cout <<"Iterative Binary Search\n";
	assert(lBS.iterative_binary_search(sorted, 6) == 5);
	assert(lBS.iterative_binary_search(sorted, 12) == -1);
	assert(lBS.iterative_binary_search(itBS_bug1, 2) == -1);
	assert(lBS.iterative_binary_search(itBS_bug2, 5) == 0);
	cout <<"Recursive Binary Search\n";
	assert(lBS.recursive_binary_search(sorted, 0, (int)sorted.size()-1, 2) == 1);
	assert(lBS.recursive_binary_search(sorted, 0, (int)sorted.size()-1, 12) == 0);
	assert(lBS.recursive_binary_search(mid_print, 0, (int)mid_print.size()-1, 2) == 1);
}

void mergeSort() {

	// TEST CASE 1 
	vector<int> unsorted {38, 27, 43, 3, 9, 82, 10};
	vector<int> sorted(unsorted); sort(sorted.begin(), sorted.end());
	mergeSortArray mSA_1(unsorted);
}

int main(void) {
	
//	linearBS();
	mergeSort();

	return 0;
}
