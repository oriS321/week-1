#include "Stack.h"
#include <iostream>
using namespace std;

int main()
{
    Stack* s = new Stack;
    initStack(s);

    cout << "initialize 5 and 9 in the stack...\n" << endl;

    push(s, 5);
    push(s, 9);

    cout << "first stack output: " << pop(s) << endl;
    cout << "second stack output: " << pop(s) << endl;

    cleanStack(s);

    return 0;
}