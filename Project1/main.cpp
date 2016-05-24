#include "List.h"
#include "Stack.h"
#include "Queue.h"
#include <string>
#include <iostream>

using namespace std;

using namespace MyStuff;

int main(){

	string item;
	List<string>* myList = new List<string>();

	cout << "Hey Bruh, feeling pretty hungry. Make a list of foods for an awesome sandwich! \n";
	cout << "Type in the name of an item, then press enter to add the item to the list. \n";
	cout << "Add ~ as the last item to end the list \n \n";

	while (item != "~")
	{
		cin >> item;
		if (item != "~")
			myList->addNode(item);
	}
	item = "";
	cout << "Thanks Bruh, let's see what you got. \n\n";


	for (int i = 0; i < myList->count(); i++)
	{
		cout << myList->get(i) << endl;
	}
	cout << "\nOh Bruh, that's too extreme, can you like get rid of some. \n";
	cout << "Type in the item name on the list to get rid of them. \n";
	cout << "Again, end with ~ \n\n";

	while (item != "~")
	{
		cin >> item;
		if (item != "~")
			myList->deleteNode(item);
	}
	item = "";
	cout << "Sweet, this is what we got. \n\n";

	for (int i = 0; i < myList->count(); i++)
	{
		cout << myList->get(i) << endl;
	}

	QueueList<string>* myQueue = new QueueList<string>();

	cout << endl << "Okay Brometheus, we gotta toast some of these things, \n what would you like to warm up?" << endl;
	cout << "List down the items you want, first in the oven will be \n the first one out my main man. End with ~" << endl << endl;

	while (item != "~")
	{
		cin >> item;
		if (item != "~")
		{
			myQueue->Enqueue(item);
		}
	}
	item = "";

	cout << "Righteous. Heres the order the items came out of the oven." << endl << endl;
	while (!myQueue->isEmpty())
	{
		cout << myQueue->Peek() << endl;
		myQueue->Dequeue();
	}

	Stack<string>* myStack = new Stack<string>();

	cout << endl << "Alrighty Broku, here's a challenge. \n We're going to stack the items into a sandwich," << endl;
	cout << "but you gotta eat it from top to bottom.\n List the order this sandwich is made. End with ~" << endl << endl;

	cout << "Remember, this is what you got" << endl;

	for (int i = 0; i < myList->count(); i++)
	{
		cout << myList->get(i) << endl;
	}
	cout << endl;

	while (item != "~")
	{
		cin >> item;
		if (item != "~")
		{
			myStack->Push(item);
		}
	}
	item = "";
	cout << "Sweet that means you got to eat them in this order." << endl << endl;

	while (!myStack->isEmpty())
	{
		cout << myStack->Peek() << endl;
		myStack->Pop();
	}
	cout << "The End";
	cin.ignore();
	cin.get();
	return 0;
}