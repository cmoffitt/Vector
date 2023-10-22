#ifndef VECTOR
#define VECTOR

#include "Node.h"

template <class T> class Vector
{
	public:
		Vector(void);
		void Append(T thing);
		//T& operator [] (int index);
		int Size(void);

		//~Vector(void);

	private:
		Node<T>* head;
		Node<T>* tail;
		int size;
};


#endif // VECTOR

