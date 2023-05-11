#include<iostream>
using namespace std;

int main(){
    int array[]={1,2,3,4,5};
    int size=sizeof(array)/sizeof(array[0]);
    int k=9;

    if(k%size==0){
        k=5;

    }else{
        k=k%size;
    }

    
    int ansArray[size];

    int m=0;
    for(int i=size-k;i<size;i++){
        ansArray[m++]=array[i];

    }

    for(int i=0;i<=k;i++){
        ansArray[m++]=array[i];
    }


    for(int i=0;i<size;i++){
        cout<<ansArray[i]<<endl;
    }







    return 0;
}