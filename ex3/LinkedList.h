#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct itemNode
{
	unsigned int item;
	struct itemNode* next;
} itemNode;

itemNode* initItem(unsigned int newItem);

void enStack(itemNode** head, itemNode* newItem);
int deStack(itemNode** head);


#endif /* LINKEDLIST_H */
