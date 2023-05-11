#include <iostream>
using namespace std;

void sortZeroAndOne(int array[], int size)
{
    int leftPtr = 0;
    int rightPtr = size - 1;

    while (leftPtr <= rightPtr)
    {
        if (array[leftPtr] == 1 && array[rightPtr] == 0)
        {
            swap(array[leftPtr++], array[rightPtr--]);
        }
        if (array[leftPtr] == 0)
        {
            leftPtr++;
        }
        if (array[rightPtr] == 1)
        {
            rightPtr--;
        }
    }
}

int main()
{
    int array[] = {0, 1, 1, 0, 1, 0, 0};
    int size = sizeof(array) / sizeof(array[0]);

    sortZeroAndOne(array, size);

    for (int ele : array)
    {
        cout << ele << endl;
    }

    return 0;
}