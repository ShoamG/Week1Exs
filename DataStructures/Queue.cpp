#include "Queue.h"

void initQueue(Queue* q, unsigned int size);
void cleanQueue(Queue* q);
void enqueue(Queue* q, unsigned int newValue);
int dequeue(Queue* q);
bool isEmpty(Queue* s);
bool isFull(Queue* s);

/*
function makes a new empty queue of given size
input: pointer to queue, size of the queue
output: none
*/
void initQueue(Queue* q, unsigned int size)
{
	q->arr = new int[size];
	q->size = size;
	q->head = 0;
	q->tail = -1;
}

/*
function cleans the queue from memory
input: pointer to queue
output: none
*/
void cleanQueue(Queue* q)
{
	delete[] q->arr;
	q->arr = nullptr;
}

/*
function adds a new value to the last available spot in queue
input: pointer to queue, new value to add
output: none
*/
void enqueue(Queue* q, unsigned int newValue)
{
	// checking if queue is full
	if (q->tail == q->size - 1)
	{
		return;
	}
	q->tail++;
	q->arr[q->tail] = newValue;
}

/*
function removes the first in value from the queue and return the new first value
input: pointer to queue
output: the new first value in the queue or -1 if queue is empty
*/
int dequeue(Queue* q)
{
	if (q->head > q->tail)
	{
		return -1; // queue is empty
	}
	return q->arr[q->head++];
}

/*
function checks if the queue is empty
input: pointer to queue
output: true if queue is empty, else false 
*/
bool isEmpty(Queue* s)
{
	return s->head > s->tail;
}

/*
function checks if the queue is full
input: pointer to queue
output: true if queue is full, else false 
*/
bool isFull(Queue* s)
{
	return s->tail == s->size - 1;
}