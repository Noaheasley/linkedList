#pragma once
#include <iostream>
#include "Iterator.h"
template<typename T>

class List
{
public:
	List<T>();
	List<T>();
	~List<T>();
	void destroy();
	Iterator<T> begin();
	Iterator<T> end();
	bool contains(const T& object);
	const void pushFront(const T& value);
};