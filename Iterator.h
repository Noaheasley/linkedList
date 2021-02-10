#pragma once
#include <iostream>
#include "Node.h"
template<typename T>
class Iterator
{
public:
	Iterator<T>() { };
	Iterator<T>(Node<T>* node);
	Iterator<T> operator ++();
	Iterator<T> operator --();
	const bool operator ==(const Iterator<T>& iter);
	const bool operator != (const Iterator<T>& iter);
	T operator* () { return m_current->data };
private:
	Node<T> m_current;
};

template<typename T>
inline Iterator<T>::Iterator(Node<T>* node)
{
	m_current = node;
}

template<typename T>
inline Iterator<T> Iterator<T>::operator++()
{
	if (current.next)
		current = current.next;
	return Iterator<T>(current);
}

template<typename T>
inline Iterator<T> Iterator<T>::operator--()
{
	if (current.previous)
		current = current.previous;
	return Iterator<T>(current);
}

template<typename T>
const bool Iterator<T>::operator!=(const Iterator<T>& iter)
{

}

template<typename T>
const bool Iterator<T>::operator==(const Iterator<T>& iter)
{

}