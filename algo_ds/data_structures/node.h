/**
 * @brief Templated Node data structure.
 * 
 * Node with type T data, and Node pointer pointing to the
 * next node NULL by default.
 * 
 * @tparam T. Type T.
 */
template<class T> class Node {
	public:

    // Different types
	typedef T value_type;
	typedef T& reference_type;
	typedef T const& const_reference_type;
	typedef T* pointer_type;
	typedef T const* const_pointer_type;

	explicit Node (value_type in) : data(in), next(NULL) {}
	
	private:
	value_type data;
	Node* next;

}; // Node 