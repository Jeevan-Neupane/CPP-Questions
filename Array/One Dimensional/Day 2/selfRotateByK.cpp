#include <iostream>
using namespace std;

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int size = 5;
    int array2[size];
    int k;
    cout << "By which value you want to rotate" << endl;
    cin >> k;
    k = k > size ? k % size : k;
    
    for (int m = k - 1; m >= 0; m--)
    {
        array2[m] = array[size - m ];
    }

    for (int i = 0; i < size - k; i++)
    {

        array2[k + i] = array[i];
    }

    cout << "Output array 2 is " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array2[i] << endl;
    }

    return 0;
}