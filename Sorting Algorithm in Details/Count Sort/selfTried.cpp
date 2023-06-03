//*This was done after watching video while travelling  to check the memory power
#include <iostream>
#include <vector>
using namespace std;

int MaximumEl(int array[], int size)
{
    int max = array[0];
    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}

void CountSort(int array[], int size)
{

    //*First we need to find the maximum element
    int max = MaximumEl(array, size);

    vector<int> V(max+1, 0);
   
    for(int i=0;i<size;i++){
        V[array[i]]++;
       
    }
    
    //*Time to find the cummulative array
    for(int i=1;i<V.size();i++){
        V[i]+=V[i-1];

    }
    int Temp[size];

    for(int i=size-1;i>=0;i--){
        Temp[--V[array[i]]]=array[i];
    }
   for(int i=0;i<size;i++){
    array[i]=Temp[i];
   }
    


    
   
}

int main()
{
    int array[] = {7, 2, 9, 4, 1, 6, 8, 3, 5};
    int size = sizeof(array) / sizeof(array[0]);

    CountSort(array, size);
    for(int i=0;i<size;i++){
        cout<<array[i]<<endl;
    }

    return 0;
}