#include <iostream>
using namespace std;

int main()
{
    int array[][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int row = sizeof(array) / sizeof(array[0]);
    int col = sizeof(array[0]) / sizeof(array[0][0]);

    for (int i = 0; i < row; i++)
    {
        for (int j = 1; j < col; j++)
        {
            array[i][j] += array[i][j - 1];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            cout << array[i][j] << " ";
        }
        cout<<endl;
    }


    return 0;
}