#include<iostream>
using namespace std;

int main(){
    int array[]={-4,-3,-1,0,2,10};
    int size=sizeof(array)/sizeof(array[0]);

    int sortedArray[size];
    int i=0;
    int j=size-1;
    int k=size-1;

    while(i<=j){
        if(abs(array[i])>abs(array[j])){
            sortedArray[k--]=array[i]*array[i];
            i++;
 

        }else{
            sortedArray[k--]=array[j]*array[j];
            j--;
        }

    }

    for(int i=0;i<size;i++){
        cout<<sortedArray[i]<<endl;
    }
   
  

    



    return 0;
}