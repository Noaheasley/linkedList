#pragma once
#include <iostream>
#include "Iterator.h"
template<typename T>

class List
{
public:
	List<T>();
	List<T>(List<T>& list);
	~List<T>();
	void destroy();
	Iterator<T> begin() const;
	Iterator<T> end() const;
	bool contains(const T& object);
	void pushFront(const T& value);
	void pushBack(const T& value);
	bool insert(const T& value, int index);
	bool remove(const T& value);
	const void print();
	void initalize();
	const bool isEmpty();
	bool getData(Iterator<T>& iter, int index);
	const int getLength();
	void deleteNode(const T& object);
	const List<T>& operator = (const List<T>& otherList);
	void sort();
private:
	Node<T> m_head = nullptr;
	Node<T> m_tail = nullptr;
	int m_nodeCount = 0;
};

template<typename T>
inline List<T>::List()
{
	
}

template<typename T>
inline List<T>::List(List<T>& list)
{
	this = list;
}

template<typename T>
inline List<T>::~List()
{

}

template<typename T>
inline void List<T>::destroy()
{

}

template<typename T>
inline bool List<T>::contains(const T& object)
{

}

template<typename T>
inline void List<T>::pushFront(const T& value)
{
	if (value.previous = nullptr || value.next = nullptr)
	{
		m_head = value;
		m_tail = value;
		value->nullptr;
	}
	value.previous = nullptr;
	value.next = nullptr;
	m_head = value;
}

template<typename T>
inline void List<T>::pushBack(const T& value)
{
	if (value.previous = nullptr || value.next = nullptr)
	{
		m_head = value;
		m_tail = value;
		value->nullptr;
	}
	value.previous = nullptr;
	value.next = nullptr;
	m_tail = value;
}

template<typename T>
inline bool List<T>::insert(const T& value, int index)
{

}

template<typename T>
inline bool List<T>::remove(const T& value)
{

}

template<typename T>
const void List<T>::print()
{

}

template<typename T>
inline void List<T>::initalize()
{

}

template<typename T>
const bool List<T>::isEmpty()
{

}

template<typename T>
inline bool List<T>::getData(Iterator<T>& iter, int index)
{

}

template<typename T>
const int List<T>::getLength()
{

}

template<typename T>
inline void List<T>::deleteNode(const T& object)
{

}

template<typename T>
inline void List<T>::sort()
{

}