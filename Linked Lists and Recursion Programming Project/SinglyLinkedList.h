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
	// Function to display the linked list
	void display() {

		std::cout << tail->data << " count:" << count << std::endl;

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