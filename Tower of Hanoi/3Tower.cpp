#include <iostream>
using namespace std;

int i = 1;
void Print(char A, char B)
{

    cout << A << "==>" << B<<"==>"<<i++<<endl;
}

void Hanoi(char A, char B, char C, int n)
{
    if (n == 1)
    {
        Print(A, B);
        return;
    }
    else
    {
        Hanoi(A, C, B, n - 1);
        Print(A, B);
        Hanoi(A, B, C, n - 1);
    }
}

int main()
{

    int n;
    // cout << "Enter the number of disk" << endl;
    // cin >> n;
    n=8;

    char A = 'a';
    char B = 'b';
    char C = 'c';
    Hanoi(A, B, C, n);

    return 0;
}