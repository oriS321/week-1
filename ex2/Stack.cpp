#include "Stack.h"

void push(Stack* s, unsigned int element)
{
	itemNode* itemNode = initItem(element);
	enStack(&(s->head), itemNode);
}

int pop(Stack* s)
{
	return deStack(&(s->head));
}

void initStack(Stack* s)
{
	s->head = nullptr;
}

void cleanStack(Stack* s)
{
	itemNode* p = nullptr;

	while (s->head)
	{
		p = s->head;
		s->head = s->head->next;

		delete p;
	}
}