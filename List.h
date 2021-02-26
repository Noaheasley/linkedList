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
	Iterator<T> begin() const { return Iterator<T>(m_head); };
	Iterator<T> end() const { return Iterator<T>(m_tail); };
	bool contains(const T& object);
	const void pushFront(const T& value);
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
	Node<T>* m_head = nullptr;
	Node<T>* m_tail = nullptr;
	int m_nodeCount = 0;
};

template<typename T>
inline List<T>::List()
{
	
}

template<typename T>
inline List<T>::List(List<T>& list)
{
	m_head = nullptr;
	m_tail = nullptr;
	m_head->previous = nullptr;
	m_tail->next = nullptr;
}

template<typename T>
inline List<T>::~List()
{
	delete List<T>;
}

template<typename T>
inline void List<T>::destroy()
{

}

template<typename T>
inline bool List<T>::contains(const T& object)
{
	bool present = false;
	Iterator iter = begin();

	while (iter != end())
	{
		iter++;

		if (iter == object)
		{
			present = true;
		}
	}
	return present;
}

template<typename T>
inline const void List<T>::pushFront(const T& value)
{
	Node<T>* newNode = new Node<T>(value);
	m_head->previous = newNode;
	newNode->next = m_head;

	newNode->previous = nullptr;
	m_head = newNode;

	m_nodeCount++;

	if (m_nodeCount == 1)
		m_tail = newNode;
	else if (m_nodeCount == 2)
		m_tail = newNode->next;
}

template<typename T>
inline void List<T>::pushBack(const T& value)
{
	Node<T>* newNode = new Node<T>(value);
	m_tail->next = newNode;
	newNode->previous = m_tail;
	newNode->next = nullptr;
	m_tail = newNode;

	m_nodeCount++;

	if (m_nodeCount == 1)
		m_head = newNode;
	else if (m_nodeCount == 2)
		m_head = newNode->previous;
}

template<typename T>
inline bool List<T>::insert(const T& value, int index)
{
	bool isInserted = false;
	Node<T>* temp = &Node<T>(value);
	Iterator<T> iter = begin();

	temp->next = m_head;
	m_head->previous = temp;
	isInserted = true;

	return isInserted;
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
	for (Iterator<int> iter = begin(); iter != end(); iter = ++iter)
	{
		std::cout << *iter << std::endl;
	}
	
}

template<typename T>
inline void List<T>::initalize()
{
	m_head = new Node<T>();
	m_tail = new Node<T>();
	m_nodeCount = 0;
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