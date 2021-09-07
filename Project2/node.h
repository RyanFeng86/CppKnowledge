template<class T>
class Node {
private:
	Node<T> *next;
public:
	T data;
	Node() {
		data = 0;
		next = NULL;
	}

};