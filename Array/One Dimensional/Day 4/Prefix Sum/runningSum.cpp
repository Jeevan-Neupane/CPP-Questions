#include<iostream>
using namespace std;

int main(){
    int array[]={5,4,1,2,3};
    int size=sizeof(array)/sizeof(array[0]);

    for(int i=1;i<size;i++){
        array[i]+=array[i-1];

    }

    for(int i=0;i<size;i++){
        cout<<array[i]<<endl;
    }



    return 0;
}