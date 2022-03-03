#include "node.h"

/**
 * @brief LinkedList representation.
 * 
 * Singly linked list with type T
 * 
 * @param T
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

    /* 
     * Insertion (head, tail, specific position)
     * Deletion (head, tail, specific position)
     * Search 
     * Size
	 */
	
    typename iterator insert_head(value_type val);
//    typename iterator insert_tail(value_type val);
//    typename iterator insert_at(value_type val);

    
	private:
	node_pointer head, tail;

}; // LinkedList

class mergeSortLinkedList {

}; // mergeSortLinkedList
