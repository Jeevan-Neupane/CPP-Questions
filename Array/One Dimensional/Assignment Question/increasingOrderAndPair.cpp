#include <iostream>
using namespace std;

int main()
{
    int array[] = {-2,-1,0,3,6,8,11,12};
    int size = sizeof(array) / sizeof(array[0]);
    int x = 14;
    bool value=false;
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if((array[i]+array[j])==x){
               
                value=true;
                cout<<array[i]<<endl<<array[j]<<endl;
                
            }
            
        }
        // if(value){
        //     break;
        // }
    }

    if(value){
        cout<<"Yes the pair exist "<<endl;
    }
    else{
        cout<<"Value doesn't exist "<<endl;
    }

    


    return 0;
}