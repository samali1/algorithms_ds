#include "helper.h"

/**
 * @brief MergeSort on Array (Vector)
 */

class mergeSortArray {
	public:

    explicit mergeSortArray(vector<int> &nums);

    /**
     * @brief MergeSort
     * 
     * Perform MergeSort on an unsorted vector of integers. 
     * 
     * Divide: split the list into two halves (left, right)
     * Sort: given a list with its ranges!!!, sort the list and return it
     * Merge: join two lists together
     * 
     * @param nums Vector of unsorted values.
     * 
     */
    vector<int> mergesort(vector<int> &nums, int low, int high);

    /**
     * @brief merge
     * 
     * Merge two sorted vectors into one.
     * 
     * @param left Left sorted half in this call.
     * @param right Right sorted half of previous call.
     */
    vector<int> merge(vector<int> &left, vector<int> &right); 
}; // mergeSortArray