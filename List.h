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
	void pushBack(const T& value);
	bool insert(const T& value, int index);
	bool remove(const T& value);
	const void print();
	void initalize();
	const bool isEmpty();
	bool getData(iterator<T>& iter, int index);
	const int getLength();
	const List<T>& operator = (const List<T>& otherList);
	void sort();
private:
	Node<T> m_head;
	Node<T> m_tail;
	int m_nodeCount;
};