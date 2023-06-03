#include <iostream>
using namespace std;

void BubbleSort(int array[], int size)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(array[j], array[j + 1]);
            }
        }
    }
}

int main()
{
    int array[] = {3,13,45,14,65,32,1345,556,321,345,765,543};
    int size = sizeof(array) / sizeof(array[0]);

    BubbleSort(array, size);

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }

    return 0;
}