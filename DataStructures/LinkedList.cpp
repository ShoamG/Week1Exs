#include "LinkedList.h"
#include <iostream>

/*
function will add a node to the head with the given value
input: pointer to head of the list, value to add
output: none
*/
void addNode(Node** head, int value)
{
	if (!*head)
	{
		*head = new Node;
		(*head)->value = value;
		(*head)->next = nullptr;
	}
	else
	{
		Node *newNode = new Node;
		newNode->value = value;
		newNode->next = *head;
		*head = newNode;
	}
}

/*
function will remove the first node from the list
input: pointer to head of the list
output: none
*/
void removeNode(Node** head)
{
	if (*head != nullptr)
	{
		Node *temp = *head;
		*head = (*head)->next;
		delete (temp);
	}
}

/*
function will print the list
input: pointer to head of the list
output: none
*/
void printList(Node* head)
{
	Node *cur = head;
	while (cur != nullptr)
	{
		std::cout << cur->value << " ";
		cur = cur->next;
	}
	std::cout << std::endl;
}