#include <iostream>
using namespace std;

int main()
{
    int array[] = {1,2,3,4};
    int size = sizeof(array) / sizeof(array[0]);
    int x = 9;
    bool value=false;
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if((array[i]+array[j])==x){
               
                value=true;
            }
            
        }
    }

    if(value){
        cout<<"Yes the pair exist "<<endl;
    }
    else{
        cout<<"Value doesn't exist "<<endl;
    }


    return 0;
}