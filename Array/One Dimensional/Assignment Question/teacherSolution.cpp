#include <iostream>
using namespace std;

int main()
{
    int array1[] = {1, 2, 3};
    int array2[] = {4, 5, 6};
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);
    int mergedArray[size1 + size2];

    int i = 0;
    int j = 0;
    int k = 0;

    while (j < size2 and i < size1)
    {
        if (array1[i] < array2[j])
        {
            mergedArray[k++] = array1[i++];
        }
        else
        {
            mergedArray[k++] = array2[j++];
        }
    }

    while (i < size1)
    {

        mergedArray[k++] = array1[i++];
    }

    while (j < size2)
    {
        mergedArray[k++] = array2[j++];
    }

    for (int i = 0; i < size1 + size2; i++)
    {
        cout << mergedArray[i] << endl;
    }

    return 0;
}