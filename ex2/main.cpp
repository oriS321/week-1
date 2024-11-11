#include "LinkedList.h"
#include <iostream>
using namespace std;

int main() 
{
    itemNode* head = NULL;

    cout << "initialize 5 and 9 in the stack...\n" << endl;

    itemNode* itemNode1 = initItem(5);
    enStack(&head, itemNode1);

    itemNode* itemNode2 = initItem(9);
    enStack(&head, itemNode2);

    cout << "first stack output: " << deStack(&head) << endl;
    cout << "second stack output: " << deStack(&head) << endl;

    return 0;
}