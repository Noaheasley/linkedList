#pragma once
#include <iostream>
#include "Node.h"
template<typename T>
class Iterator
{
public:
	Iterator<T>();
	Iterator<T>(Node<T>* node);
	Iterator<T> operator ++();
	Iterator<T> operator --();
	const bool Iterator<T> operator ==(const Iterator<T>& iter);
	const bool operator != (const Iterator<T>& iter);
	T operator* ();
	Node<T> current;
};