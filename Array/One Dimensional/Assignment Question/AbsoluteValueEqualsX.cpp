#include <iostream>
using namespace std;

int main()
{
    int array[] = {9,23,45,69,78};
    int size = sizeof(array) / sizeof(array[0]);

    int x = 56;

    int i = 0;
    int j = size - 1;
    bool find = false;

    while (i < j)
    {
        if (abs(array[i] - array[j]) == x)
        {
            find = true;
            break;
        }
        if(abs(array[i]-array[j])<x){
            i++;
        }else{
            j--;
        }
    }

    if(find){
        cout<<"Yes the value get exist"<<endl;
    }
    else{
        cout<<"The pair doesn't exist "<<endl;
    }

    return 0;
}