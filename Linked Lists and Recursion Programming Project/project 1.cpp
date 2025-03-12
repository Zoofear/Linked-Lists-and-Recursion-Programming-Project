//
//

#include <iostream>
#include "SinglyLinkedList.h"

using namespace std;

int main()
{

	SinglyLinkedList list1;

	list1.insertAtBeginning(50);
	list1.insertAtBeginning(40);
	list1.insertAtBeginning(30);
	list1.insertAtBeginning(20);
	list1.insertAtBeginning(10);

	cout << "displaying list1" << endl;
	
	list1.display();

	list1.deleteValue(10);

	cout << "deleting the first value 10" << endl;

	list1.display();

	list1.deleteValue(50);

	cout << "deleting the last value 50" << endl;

	list1.display();

	cout << "deleting the middle value 30" << endl;

	list1.deleteValue(30);

	list1.display();
	
	list1.~SinglyLinkedList();

	list1.insertAtEnd(50);
	list1.insertAtEnd(40);
	list1.insertAtEnd(30);
	list1.insertAtEnd(20);
	list1.insertAtEnd(10);

	cout << "displaying list2" << endl;

	list1.display();

	cout << "deleting the first value 50" << endl;
	
	list1.deleteValue(50);

	list1.display();

	cout << "deleting the last value 10" << endl;

	list1.deleteValue(10);

	list1.display();

	list1.deleteValue(30);

	cout << "deleting the middle value 30" << endl;

	list1.display();

	list1.~SinglyLinkedList();

};