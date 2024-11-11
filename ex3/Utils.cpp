#include "Utils.h"
#include "Stack.h"
#include <iostream>
using namespace std;

void reverse(int* nums, unsigned int size)
{
    int i = 0;

    Stack* s = new Stack;
    initStack(s);

    for (i = 0; i < size; i++)
    {
        push(s, nums[i]);
    }

    for (i = 0; i < size; i++)
    {
        nums[i] = pop(s);
    }
}


int* reverse10()
{
    int i = 0;
    int num = 0;
    int* nums = new int[SIZE] {};

    Stack* s = new Stack;
    initStack(s);

    for (i = 0; i < SIZE; i++)
    {
        cin >> num;
        nums[i] = num;
    }

    reverse(nums, SIZE);

    return nums;
}