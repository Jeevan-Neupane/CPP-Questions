#include <iostream>
using namespace std;

int main()
{
    int array[] = {9, 23, 45, 69, 78};
    int size = sizeof(array) / sizeof(array[0]);
    int x=56;
    bool value=false;

    int i=0;
    int j=1;
    while(i<size and j<size){
        if(abs(array[i]-array[j])==x){
            value=true;
            break;

        }
        if(abs(array[i]-array[j])<x){
            j++;
        }else{
            i++;
        }
    }

    if(value){
        cout<<"The pair exist"<<endl;
    }
    else{
        cout<<"The value doesn't exist"<<endl;
    }

    return 0;
}