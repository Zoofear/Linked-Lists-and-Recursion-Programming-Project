//
//

#include <iostream>
#include "SinglyLinkedList.h"

using namespace std;

int main()
{

	SinglyLinkedList list1;

	list1.insertAtEnd(34);
	list1.insertAtEnd(21);
	list1.insertAtEnd(10);
	list1.insertAtEnd(15);
	list1.insertAtEnd(90);
	list1.insertAtEnd(66);
	list1.insertAtEnd(53);
	list1.insertAtEnd(7);
	list1.insertAtEnd(88);
	list1.insertAtEnd(36);
	list1.insertAtEnd(90);
	list1.insertAtEnd(11);
	list1.insertAtEnd(17);
	list1.insertAtEnd(24);
	list1.insertAtEnd(10);

	list1.display();

	SinglyLinkedList even;

	SinglyLinkedList odd;

	list1.evenOdd(even, odd);

	even.display();

	odd.display();

	list1.display();
};