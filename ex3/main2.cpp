#include "Stack.h"
#include "Utils.h"
#include <iostream>
using namespace std;

int main()
{
    int* arr = reverse10();

    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }

    delete[] arr;

    return 0;
}