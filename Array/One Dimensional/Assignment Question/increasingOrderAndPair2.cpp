#include <iostream>
using namespace std;

int main()
{
    int array[] = {-2, -1, 0, 3, 6, 8, 11, 12};
    int size = sizeof(array) / sizeof(array[0]);
    int x = 22;
    bool value = false;

    int i = 0;
    int j = size - 1;

    while (i < j)
    {
        if (array[i] + array[j] == x)
        {
            value = true;
            break;
        }
        if (array[i] + array[j] < x)
        {
            i++;
        }
        else
        {
            j--;
        }
    }

    if (value)
    {
        cout << "The pair exist" << endl;
    }
    else
    {
        cout << "The pair doesn't exist " << endl;
    }

    return 0;
}