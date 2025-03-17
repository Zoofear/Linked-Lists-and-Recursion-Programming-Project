// Linked Lists and Recursion Programming Project.cpp : This file contains the class SinglyLinkedList code taken from the singly linked list article in module 2
//

#pragma
#include <iostream>

struct Node {
	int data; // Data part
	Node* next; // Pointer to the next node
	// Constructor to initialize a node
	Node(int value) : data(value), next(nullptr) {}
};

class SinglyLinkedList {
private:
	Node* head; // Pointer to the first node
	Node* tail; // Pointer to the final node
	int count = 0; //counting the elements in the list
public:
	SinglyLinkedList() : head(nullptr), tail(nullptr), count(0) {} // Constructor initializes the head to nullptr
	
	// Function to insert a node at the beginning
	void insertAtBeginning(int value) {
		Node* newNode = new Node(value);
		newNode->next = head;
		head = newNode;
		count++;

		if (tail == nullptr)
		{
			tail = newNode;
			return;
		}
	}
	// Function to insert a node at the end
	void insertAtEnd(int value) {
		Node* newNode = new Node(value);
		if (!head) {
			head = newNode;
			count++;
			return;
		}
		Node* temp = head;
		while (temp->next) {
			temp = temp->next;
		}
		temp->next = newNode;
		tail = newNode;

		count++;

	}
	// Function to delete the first occurrence of a value
	void deleteValue(int value) {
		if (!head) return;
		if (head->data == value) {
			Node* toDelete = head;
			head = head->next;
			delete toDelete;
			count--;
			return;
		}
		if (tail->data == value)
		{
			Node* temp = head;
			while (temp->next && temp->next->data != value)
			{
				temp = temp->next;
			}

			tail = temp;
			
			Node* toDelete = temp->next;

			delete toDelete;
			
			temp->next = nullptr;

			count--;
			
			return;

		}
		Node* temp = head;
		while (temp->next && temp->next->data != value) {
			temp = temp->next;
		}
		if (temp->next) {
			Node* toDelete = temp->next;
			temp->next = temp->next->next;
			delete toDelete;
			count--;
		}
	}

	void evenOdd(SinglyLinkedList &even, SinglyLinkedList &odd)
	{
		if (!head)	//check to make sure that your normal list is filled
		{
			std::cout << "You need to fill your base list first" << std::endl;
			return;
		}
		Node* temp = head;
		while (temp)
		{
			double num = static_cast<double>(temp->data);		//Need to set a temporary variable to the double to check if it is cleanly divisible by two
			if (temp->data / 2 == num / 2)						//Even odd checker
			{
				if (even.count == 0)							//Checks whether or not list is empty
				{
					even.head = temp;							//sets the head pointer in the list even to the current pointer in this list
				}
				else
				{
					even.tail->next = temp;						//sets the next link of the tail pointer in the list even to the current pointer in this list
				}
				even.tail = temp;								//sets the even list tail to the current pointer
				even.count++;									//adds one to the current count in the even list
				temp = temp->next;								//iterates to the next node in the list
				even.tail->next = nullptr;						//sets up the next node in the even list
			}
			else if (temp->data / 2 != num / 2)
			{
				if (odd.count == 0)
				{
					odd.head = temp;
				}
				else
				{
					odd.tail->next = temp;
				}
				odd.tail = temp;
				odd.count++;
				temp = temp->next;
				odd.tail->next = nullptr;
			}
		}
		head = nullptr;
		tail = nullptr;
		count = 0;
	}

	// Function to display the linked list
	void display() {

		std::cout << " Count (" << count << ") List :";

		Node* temp = head;
		while (temp) {
			std::cout << temp->data << " -> ";
			temp = temp->next;
		}
		std::cout << "nullptr\n";
	}
	// Destructor to free memory
	~SinglyLinkedList() {
		Node* temp;
		while (head) {
			temp = head;
			head = head->next;
			delete temp;
		}
		count = 0;
	}
};