#pragma once


#include "ListNode.h"

namespace MyStuff {
	template<typename T>

	class QueueList {

	public:
		QueueList();
		~QueueList();

		void Enqueue(T obj);
		void Dequeue();
		T Peek();
		bool isEmpty();

	private:
		ListNode<T> *rear, *front;
	};

	template<typename T>
	QueueList<T>::QueueList()
	{
		rear = nullptr;
		front = nullptr;
	}

	template<typename T>
	QueueList<T>::~QueueList()
	{
		while (front != nullptr){
			ListNode<T>* temp = front;
			front = front->next;
			delete temp;
		}
	}
	template<typename T>
	void QueueList<T>::Enqueue(T obj)
	{
		ListNode<T> * temp = new ListNode<T>(obj);

		temp->next = nullptr;

		if (rear == nullptr){
			rear = temp;
			front = temp;
		}
		else {
			rear->next = temp;
			rear = temp;
		}
	}

	template<typename T>
	void QueueList<T>::Dequeue()
	{
		if (front != nullptr){
			ListNode<T>* temp = front;
			front = front->next;
			delete temp;
			if (front == nullptr)
				rear = nullptr;
		}
	}

	template<typename T>
	T QueueList<T>::Peek()
	{
		if (front != nullptr){
			return front->value;
		}

		return nullptr;
	}

	template<typename T>
	bool QueueList<T>::isEmpty()
	{
		return front == nullptr && rear == nullptr;
	}
}