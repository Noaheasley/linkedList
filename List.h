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
	Iterator<T> begin() const { return m_head; };
	Iterator<T> end() const { return m_tail; };
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
	delete[] m_nodeCount;
}

template<typename T>
inline void List<T>::destroy()
{
	delete this;
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
		value = nullptr;
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
		value = nullptr;
	}
	value.previous = nullptr;
	value.next = nullptr;
	m_tail = value;
}

template<typename T>
inline bool List<T>::insert(const T& value, int index)
{
	T* temp = new T[getLength() + 1];
	for (int i = 0; i < getLength(); i++)
	{
		temp[i] = m_nodeCount[i];
	}

	temp[getLength()] = m_nodeCount;

	m_nodeCount = temp;

	getLength()++;
}

template<typename T>
inline bool List<T>::remove(const T& value)
{
	bool removed = false;
	T* temp = new T[getLength() - 1];

	int j = 0;
	for (int i = 0; i < getLength(); i++)
	{
		if (value != temp[i])
		{
			temp[j] = m_nodeCount[i];
			j++;
		}
		else
		{
			removed = true; 
		}
	}
	m_nodeCount = temp;

	getLength()--;
	return removed;
}

template<typename T>
const void List<T>::print()
{
	for (Iterator<int> iter = begin(); iter != end(); ++iter)
	{
		std::cout << *iter << std::endl;
	}
}

template<typename T>
inline void List<T>::initalize()
{

}

template<typename T>
const bool List<T>::isEmpty()
{
	return m_nodeCount == nullptr;
}

template<typename T>
inline bool List<T>::getData(Iterator<T>& iter, int index)
{
	iter = begin();

	for (int i = 0; i < index; i++)
		iter++;

	return false;
}

template<typename T>
const int List<T>::getLength()
{
	return m_nodeCount;
}

template<typename T>
inline void List<T>::deleteNode(const T& object)
{
	return delete(this);
}

template<typename T>
inline void List<T>::sort()
{
	Iterator<T> it = begin();
	Iterator<T> ti = end();
	for (int i = 0; i < getLength(); i++)
	{
		for (int j = getLength() - 1; j > i; j--)
		{
			Iterator<T> temp = ti;
			ti = it;
			it = temp;
		}
	}
}