#include <iostream>
using namespace std;

int main()
{
    int array[] = {7, 6, 10, 5, 9, 2, 1, 15, 7};
    int size = sizeof(array) / sizeof(array[0]);

    int pivotPoint = array[size / 2];
    int j = -1;
    for (int i = (size/2)+1; i < size ; i++)
    {
        if (array[i] < pivotPoint)
        {
            j++;
            swap(array[i], array[j]);
        }

    }

    return 0;
}