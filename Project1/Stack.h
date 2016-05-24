#pragma once

#include "ListNode.h"

namespace MyStuff {
	template<typename T>
	class Stack {

	public:
		Stack();
		~Stack();
		//Push
		void Push(T obj);
		//Pop
		void Pop();
		//Peek
		T Peek();

		bool isEmpty();

	private:
		ListNode<T>* top;
	};


	template<typename T>
	Stack<T>::Stack()
	{
		top = nullptr;
	}

	template<typename T>
	Stack<T>::~Stack()
	{
		while (top != nullptr)
		{
			ListNode<T>* temp = top;
			top = top->next;
			delete temp;
		}

	}



	template<typename T>
	void Stack<T>::Push(T obj)
	{
		ListNode<T> * temp = new ListNode<T>(obj);
		temp->next = top;
		top = temp;
	}



	template<typename T>
	void Stack<T>::Pop()
	{
		if (top != nullptr){
			ListNode<T>* temp = top;
			top = top->next;
			delete temp;
		}
	}

	template<typename T>
	T Stack<T>::Peek()
	{
		if (top != nullptr)
		{
			return top->value;
		}

		return nullptr;
	}

	template<typename T>
	bool Stack<T>::isEmpty()
	{
		return top == nullptr;
	}
}
