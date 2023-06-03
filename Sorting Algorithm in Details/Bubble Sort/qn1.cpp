#include<iostream>
using namespace std;

int main(){
    int array[]={20,50,40,10,30};
    int size=sizeof(array)/sizeof(array[0]);

    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(array[j]>array[j+1]){
                swap(array[j],array[j+1]);
            }
        }
    }

    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }



    return 0;
}