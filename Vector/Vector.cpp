#include "Vector.h"

template <class T> Vector<T>::Vector()
{
	head = 0;
	tail = 0;
	size = 0;
}

template <class T> void Vector<T>::Append(T thing)
{
	if(head == 0)
	{
		head = new Node<T>();
		tail = new Node<T>();

		head->Thing = thing;
		head->Next = tail;
		tail->Thing = 0; 
		tail.next = 0;
	}
	else 
	{
		tail->Thing = thing;
		tail->Next = new Node<T>();
		tail = tail->Next;
	}

	size++;
}

template <class T> int Vector<T>::Size(void)
{
	return size;
}