//This branch of the program has the class SinglyLinkedList with the updated functionality of sorting the list into two separate even and odd lists. Pt2 is the unaltered program and this is where the fucntion is tested
//

#include <iostream>
#include "SinglyLinkedList.h"

using namespace std;

int main()
{
	SinglyLinkedList list;

	list.insertAtEnd(5);
	list.insertAtEnd(10);
	list.insertAtEnd(15);
	list.insertAtEnd(20);
	list.insertAtEnd(25);
	list.insertAtEnd(30);
	list.insertAtEnd(35);
	list.insertAtEnd(40);
	list.insertAtEnd(45);
	list.insertAtEnd(50);

	cout << "printing list" << endl;
	list.display();

	cout << "printing list in reverse" << endl;
	list.reversePrint();


};