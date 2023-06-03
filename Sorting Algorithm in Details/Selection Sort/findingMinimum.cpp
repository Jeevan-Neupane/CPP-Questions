#include <iostream>
using namespace std;

int main()
{
    int array[] = {3, 1, 5, 4, 2};
    int size = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < size; i++)
    {
        int minimumIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (array[minimumIndex] > array[j])
            {
                minimumIndex=j;
            }
        }
        swap(array[i],array[minimumIndex]);
    }

    for(int i=0;i<size;i++){
        cout<<array[i]<<endl;
    }
   

    return 0;
}