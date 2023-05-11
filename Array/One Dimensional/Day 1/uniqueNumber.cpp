#include<iostream>
using namespace std;

int main(){
    int array[]={2,3,1,3,2,4,4,1,5};

    int size=sizeof(array)/sizeof(array[0]);

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(array[i]==array[j]){
                array[i]=array[j]=INT16_MIN;
            }
        }
    }

    for(int i:array){
        if(i!=INT16_MIN){
            cout<<i<<endl;
        }
    }




    return 0;
}