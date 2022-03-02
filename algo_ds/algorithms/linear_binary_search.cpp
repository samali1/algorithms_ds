#include "linear_binary_search.h"

const int linearBinarySearch::linear_search(vector<int> &nums, int target) {
    for (size_t i = 0; i < nums.size();i++) {
        if (nums[i] == target) { return (int)i; }
    }
    return -1;
} // linear_search()

const int linearBinarySearch::iterative_binary_search(vector<int> &nums, int target) {
    int low = 0, high = (int) nums.size()-1;
    
    while (low <= high) {
        int mid = low + ((high - low) / 2);
        
        if (nums[mid] == target) { return mid; }
        else if (target < nums[mid]) { high = mid - 1; }
        else { low = mid + 1;}
    }
    
    return -1;
} // iterative_binary_search()

bool linearBinarySearch::recursive_binary_search(vector<int> &nums, int low, int high, int target) {
    if (low > high) {
        return false;
    }
    else {
        int mid = low + ((high - low) / 2);
        
        if (nums[mid] == target) {
            return true;
        }
        else if (nums[mid] > target) {
            return recursive_binary_search(nums, low, mid, target);
        }
        else { return recursive_binary_search(nums, mid+1, high, target); }
    }
    return false;
} // recursive_binary_search()

