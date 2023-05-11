#include <iostream>
using namespace std;

int main()
{
    int array[] = {1, 2, 3, 4, 1, 0, 1};
    int size = sizeof(array) / sizeof(array[0]);
    int prefix = 0;
    int suffix = 0;

    for (int i = 0; i < size; i++)
    {
        prefix += array[i];
        suffix = 0;
        // cout<<prefix<<endl;

        for (int j = i + 1; j < size; j++)
        {
            suffix += array[j];
            // cout<<suffix<<endl;
        }

        if (prefix == suffix)
        {
            cout << prefix << endl
                 << suffix << endl;
            cout << "The array can be divided into equal portion with equal sum" << endl;
            break;
        }
    }

    if (prefix != suffix)
    {
        cout << "The array cannot be divided into equal portion with equal sum" << endl;
    }

    return 0;
}