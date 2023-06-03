#include <iostream>
using namespace std;

int main()
{
    int array[] = {18, 12, 30, 16, 35, 20};
    int size = sizeof(array) / sizeof(array[0]);
    int pivotEl = array[size - 1];

    int i = 0;
    int j = size - 1 - 1;

    while (i < j)
    {
        while (array[i] <= pivotEl)
        {
            i++;
        }
        while (array[j] > pivotEl)
        {
            j--;
        }

       if(i<j){
        swap(array[i],array[j]);
       }
    }
    swap(array[i],array[size-1]);

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }

    cout<<"Value of i is"<<i<<endl;

    return 0;
}