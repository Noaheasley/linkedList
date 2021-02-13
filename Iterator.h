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
	T operator* () { return m_current->data; };
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
	if (m_current.next)
		m_current = m_current.next;
	return Iterator<T>(m_current);
}

template<typename T>
inline Iterator<T> Iterator<T>::operator--()
{
	if (m_current.previous)
		m_current = m_current.previous;
	return Iterator<T>(m_current);
}

template<typename T>
const bool Iterator<T>::operator!=(const Iterator<T>& iter)
{

}

template<typename T>
const bool Iterator<T>::operator==(const Iterator<T>& iter)
{

}