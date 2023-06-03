#include <iostream>
using namespace std;
void SpiralOrder(int array[][4])
{
    int L = 0;
    int R = 3;
    int T = 0;
    int B = 2;
    int D = 0;

    while (L <= R and T <= B)

    {

        //&For Left To right in First Row
        if (D == 0)
        {
            for (int i = L; i <= R; i++)
            {
                cout << array[T][i] << " ";
            }
            T++;
        }

        else if (D == 1)
        {
            for (int i = T; i <= B; i++)
            {
                cout << array[i][R] << " ";
            }
            R--;
        }
        else if (D == 2)
        {
            for (int i = R; i >= L; i--)
            {
                cout << array[B][i] << " ";
            }
            B--;
        }
        else
        {
            for (int i = B; i >= T; i--)
            {
                cout << array[i][L] << " ";
            }
            L++;
        }
        D = (D + 1) % 4;
    }
}

int main()
{
    int array[][4] = {{1, 2, 3,4}, {5, 6,7,8}, {9,10,11,12}};

    SpiralOrder(array);

    return 0;
}