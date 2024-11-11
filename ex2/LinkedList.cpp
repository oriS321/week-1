#include "LinkedList.h"
#include <iostream>

itemNode* initItem(unsigned int newItem)
{
    itemNode* newItemNode = new itemNode;

    newItemNode->item = newItem;
    newItemNode->next = NULL;

    return newItemNode;
}

void enStack(itemNode** head, itemNode* newItemNode)
{
    if (!*head)
    {
        *head = newItemNode;
    }
    else
    {
        newItemNode->next = *head;
        *head = newItemNode;
    }
}

int deStack(itemNode** head)
{
    int ItemValue = (*head)->item;
    itemNode* p = *head;

    if (!*head)
    {
        return -1;
    }

    *head = (*head)->next;

    delete p;

    return ItemValue;
}