#include<iostream>
using namespace std;

void SortArray(int array[],int size){
    int i=0;
    int j=size-1;
    while(i<=j){
        if(array[i]%2!=0 && array[j]%2==0){
            swap(array[i++],array[j--]);
        }
        if(array[i]%2==0){
            i++;
        }
        if(array[j]%2!=0){
            j--;
        }
    }

}

int main(){
    int array[]={1,2,3,4,5,6,7};
    int size=sizeof(array)/sizeof(array[0]);

    SortArray(array,size);

    for(int i=0;i<size;i++){
        cout<<array[i]<<endl;
    }





    return 0;
}