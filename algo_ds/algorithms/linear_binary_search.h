#include "helper.h"

class linearBinarySearch {
public:
	explicit linearBinarySearch () {}
	
    /**
     * @brief Iterative linear search.
     * 
     * Performs a linear search through a sorted list for 
     * a target. 
     * 
     * Time complexity: O(n)
     * Space complexity: O(1)
     * 
     * @param nums. Sorted list.
     * @param target. Target value being searched for.
     * @return const int. Returns the position of target
     * if found, else -1.
     */
	const int linear_search(vector<int>&nums, int target);

    /**
     * @brief Iterative binary search.
     * 
     * Performs a iterative binary search through a sorted
     * list for a target.
     * 
     * Time complexity: O(log n)
     * Space complexity: O(1)
     * 
     * @param  nums. Sorted list.
     * @param target. Target value being searched for.
     * @return const int. Returns the position of target
     * if found, else -1.
     */
	const int iterative_binary_search(vector<int> &nums, int target);

    /**
     * @brief Recursive binary search.
     * 
     * Peforms a recursive binary search through a sorted
     * list for a target, given range [low, high)
     * 
     * Time complexity: O(log n)
     * Space complexity: O(log n)
     *     
     * @param nums. Sorted list.
     * @param low. [low, ...)
     * @param high [..., high)
     * @param target. Target value being searched for.
     * @return true. Returns true if target value found in
     * list.
     * @return false. Else returns false if target not
     * found.
     */
	bool recursive_binary_search(vector<int> &nums, int low, int high, int target); 

}; // CLASS linearBinarySearch 
