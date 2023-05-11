#include <iostream>
using namespace std;

int main()
{
    int array[] = {0, 1, 1, 0, 1, 0, 0};
    int size = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < size / 2; i++)
    {
        for (int j = size - 1; j >= size / 2; j--)
        {
            if (array[i] == 1 && array[j] == 0)
            {
                swap(array[i], array[j]);
            }
        }
    }

    for (int ele : array)
    {
        cout << ele << endl;
    }

    return 0;
}