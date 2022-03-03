#include "algorithms/mergesort.h"

mergeSortArray::mergeSortArray(vector<int> &nums) {
    cout <<"Original list: "<<nums<<"\n";
    nums = mergesort(nums, 0, nums.size()-1);
    cout <<"Sorted list: "<<nums<<"\n";
} 

vector<int> mergeSortArray::mergesort(vector<int> &nums, int low, int high) {
    if (nums.size() == 1) { 
        cout <<"Last element: "<<nums[0]<<"\n";
        return nums; 
    }
    
    else {
        // 1. Divide
        int mid = low + ((high - low)/2);

        vector<int> left_half(nums.begin(),nums.begin()+mid+1);
        vector<int> right_half(nums.begin()+mid+1, nums.end());

        cout <<"Left half: "<<left_half<<" | ";
        cout <<"Right half: "<<right_half<<"\n";

        // 2. Sort 
        left_half = mergesort(left_half, 0, (int) left_half.size()-1);
        right_half = mergesort(right_half, 0, (int) right_half.size()-1);

        // 3. Merge
        nums = merge(left_half, right_half);
        cout <<"Current list: "<<nums<<"\n";
    }
    return nums;
} // mergesort()

vector<int> mergeSortArray::merge(vector<int> &left, vector<int> &right) {
    vector<int> out;
    int i = 0, j = 0;

    while (i < left.size() && j < right.size()) {
        // 1. If value in left array is less than value in right array
        if (left[i] < right[j]) {
            out.push_back(left[i]);
            i++;
        }
        // 2. If value in left array is greater than value in right array
        else {
            out.push_back(right[j]);
            j++;
        }
    }
    
    while (i != left.size()) {
        out.push_back(left[i]);
        i++;
    }
    
    while (j != right.size()) {
        out.push_back(right[j]);
        j++;
    }
    
    return out;
} // merge()

