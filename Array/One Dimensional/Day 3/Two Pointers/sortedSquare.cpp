#include <iostream>
#include <math.h>
using namespace std;


void ReveseArray(int ans[],int size){
    int i=0;
    int j=size-1;
    while(i<=j){
        swap(ans[i],ans[j]);
        i++;
        j--;

    }

}

void SortedArray(int array[], int size, int ans[])
{

    int i = 0;
    int j = size - 1;
    int k = 0;
    while (i <= j)
    {
        if (abs(array[i]) > abs(array[j]))
        {
            ans[k++] = array[i] * array[i];
            i++;
        }
        else
        {
            ans[k++] = array[j] * array[j];
            j--;
        }
    }

    ReveseArray(ans,size);
}

int main()
{
    int array[] = {-10, -3, 2, 5, 6,9};
    int size = sizeof(array) / sizeof(sizeof(array[0]));
    int ans[size];

    SortedArray(array, size, ans);

    for (int i = 0; i < size; i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}