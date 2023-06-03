#include<iostream>
using namespace std;

int main(){
    int array1[]={3,6,9};
    int array2[]={2,5,8};
    int size1=sizeof(array1)/sizeof(array1[0]);
    int size2=sizeof(array2)/sizeof(array2[0]);

    int i=0;
    int j=0;
    int k=0;

    int newArray[size1+size2];

    while(i<size1 && j<size2){
        if(array1[i]<array2[j]){
            newArray[k++]=array1[i++];
        }
        else{
            newArray[k++]=array2[j++];
        }
       
    }

    while(i<size1){
        newArray[k++]=array1[i++];
    }

    while(j<size2){
        newArray[k++]=array1[j++];
        
    }

    for(int i=0;i<size1+size2;i++){
        cout<<newArray[i]<<endl;
    }



    return 0;
}