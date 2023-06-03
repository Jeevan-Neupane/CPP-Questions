#include<iostream>
using namespace std;

void MergeSort(int array[],int p,int q, int r){

}

void Divide(int array[],int p,int q){

    if(p<q){
        int r=(p+q)/2;
        Divide(array,p,r);
        Divide(array,r+1,q);
        MergeSort(array,p,q,r);
    }
}


int main(){
    int array[]={9,2,4,7,8,1};

    int size=sizeof(array)/sizeof(array[0]);
    
    Divide(array,0,size-1);



    return 0;
}