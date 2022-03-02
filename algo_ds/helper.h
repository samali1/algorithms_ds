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




/**
 * @brief Node representation
 * 
 * Node with type T data, and Node pointer pointing to the next node
 * NULL by default
 * 
 * @tparam T -> type
 */
template<class T> class Node {
	private:
	value_type data;
	Node* next;
	
	public:
	// bunch of types
	typedef T value_type;
	typedef T& reference_type;
	typedef T const& const_reference_type;
	typedef T* pointer_type;
	typedef T const* const_pointer_type;

	explicit Node (value_type in) { data(in), next(NULL) }

}; // Node 

/**
 * @brief LinkedList representation.
 * 
 * Singly linked list with type T
 * 
 * @tparam T 
 */
template<class T> class LinkedList {
	explicit LinkedList() {}

	typedef Node<T> node_type;
  	typedef node_type* node_pointer;

	public:

	typedef typename node_type::value_type value_type;
	typedef typename node_type::reference_type reference_type;
	typedef typename node_type::const_reference_type const_reference_type;

	// Methods

	void 

	private:
	node_pointer head, tail;

}; // LinkedList

class mergeSortLinkedList {

}; // mergeSortLinkedList

#endif /* helper_h */
