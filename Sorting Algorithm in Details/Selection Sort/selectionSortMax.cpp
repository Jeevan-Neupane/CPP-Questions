#include <iostream>
using namespace std;

int main()
{

    int array[] = {3, 1, 5, 4, 2};
    int size = sizeof(array) / sizeof(array[0]);

    for (int i = size-1; i >=0; i--)
    {
        int maximumIndex = i;
        for (int j = i - 1; j >=0; j--)
        {
            if (array[maximumIndex] < array[j])
            {
                maximumIndex = j;
            }
        }
        swap(array[i], array[maximumIndex]);
    }

    for(int i=0;i<size;i++){
        cout<<array[i]<<endl;
    }

    return 0;
}