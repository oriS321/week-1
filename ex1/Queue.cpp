#include "Queue.h"
#include <iostream>

using namespace std;

void initQueue(Queue* q, unsigned int size)
{
    int i = 0;
    q->size = size;
    q->queueArr = new unsigned int[size] {};
}

void cleanQueue(Queue* q)
{
    delete[] q->queueArr;
}

void enqueue(Queue* q, unsigned int newValue)
{
    int count = 0, i = 0;

    if (isFull(q))
    {
        return;
    }

    while (q->queueArr[count])
    {
        count++;
    }

    q->queueArr[count] = newValue;
}

bool isEmpty(Queue* s)
{
    return s->queueArr[0] == 0;
}

bool isFull(Queue* s)
{
    return s->queueArr[s->size - 1] != 0;
}

int dequeue(Queue* q)
{
    int dequeueValue = q->queueArr[0], i = 0;

    if (isEmpty(q))
    {
        return -1;
    }

    for (i = 0; i < (q->size) - 1; i++)
    {
        q->queueArr[i] = q->queueArr[i + 1];
    }

    q->queueArr[(q->size) - 1] = 0;

    return dequeueValue;
}