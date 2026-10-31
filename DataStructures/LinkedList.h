#ifndef LinkedList_h
#define LinkedList_h

typedef struct Node
{
	int value;
	struct Node *next;
} Node;

void addNode(Node **head, int value);
void removeNode(Node **head);
void printList(Node* head);

#endif