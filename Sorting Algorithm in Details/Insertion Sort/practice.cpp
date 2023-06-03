#include<iostream>
using namespace std;

int main(){
    int array[]={5,7,8,2,4,6,3};
    int size=sizeof(array)/sizeof(array[0]);
   
    for(int i=1;i<size;i++){
        int currentEl=array[i];
        
        int j=i-1;
        while(currentEl<array[j] && j>=0){
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=currentEl;

       
    }

    for(int i=0;i<size;i++){
        cout<<array[i]<<endl;
    }




    return 0;
}