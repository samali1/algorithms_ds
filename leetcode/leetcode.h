	//
	//  leetcode.h
	//  algo_ds
	//
	//  Created by Sameer Ali on 3/1/22.
	//

	#ifndef leetcode_h
	#define leetcode_h

	#include <stdio.h>
	#include <iostream>
	#include <vector>
	#include <algorithm>
	#include <string>
	#include <queue>
	#include <unordered_map>
	#include <unordered_set>
	#include <utility>
	#include <bitset>
	#include <cassert>

	using namespace std;

	ostream& operator<<(ostream &out, vector<int> &input) {
		cout <<"Vector contents: ";
		for (auto &index : input) { cout << index<<" "; }
		cout <<"\n";
		
		return out;
	} // VECTOR PRINTING

	ostream& operator<<(ostream &out, int *arr) {
		int arr_size = sizeof(arr)/sizeof(arr[0]);
		cout <<"Vector contents: ";
		for (int i = 0; i < arr_size; i++) { cout <<i<<" "; }
		cout <<"\n";
		
		return out;
	} // VECTOR PRINTING

	class SearchInsertPosition {
	public:
		explicit SearchInsertPosition () {}
		const int searchInsert(vector<int>& nums, int target) {
			/* AminiCK (LeetCode: 704 Binary Search)
			 * My rule of thumb when it comes to binary search:
			 * 1. Include ALL possible answers when initialize lo & hi
			 * 2. Don't overflow the mid calculation
			 * 3. Shrink boundary using a logic that will exclude mid
			 * 4. Avoid infinity loop by picking the correct mid and shrinking logic
			 * 5. Always think of the case when there are 2 elements left
			 */
			
			int low = 0, high = (int) nums.size()-1;
			while (low <= high) {
				int mid = low + ((high-1 - low) / 2);
				
				if (nums[mid] == target) {
					cout <<"Target found at position "<<mid<<".\n";
					return mid;
				}
				else if (target < nums[mid]) {
					high = mid - 1; // adjust range end
				}
				else {
					low = mid + 1; // adjust range start
				}
			}
			
			cout <<"Target: would be inserted at position "<<low<<".\n";
			return low;
		} // searchInsert()
		
	}; // Leetcode 35

	class FindTargetIndicesSortedArray { // Leetcode 2089
	public:
		explicit FindTargetIndicesSortedArray () {}
		const vector<int> findIndices(vector<int> &nums, int target) {
			vector<int> indices;
			
			sort(nums.begin(), nums.end()); // sort array in ascending order
			
			int low = 0, high = (int) nums.size()-1;
			
			while (low <= high) {
				int mid = low + ((high - low) / 2);
				
				if (target == nums[mid]) {
					indices.push_back(mid);
				}
				if (target < nums[mid]) { high = mid - 1; }
				else { low = mid - 1; }
			}
			
			return indices;
		} // findIndices()
		
		void verify(vector<int> &results, vector<int> &correct) {
			cout <<"Output: "<<results;
			cout <<"Correct: "<<correct;
		}
		
	};
	#endif /* leetcode_h */
