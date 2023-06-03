#include<iostream>
using namespace std;

int main(){
    int array[]={1,3,3,5};
    int size=sizeof(array)/sizeof(array[0]);
    int x=6;
    int  pair=0;
    int i=0;
    int j=size-1;
    while(i<=j){
        if(array[i]+array[j]==x){
            pair++;
            i++;
            j--;
        }
        if(array[i]+array[j]>x){
            j--;
        }
        else{
            i++;
        }
    }

    

    cout<<"Number of pair are "<<pair<<endl;



    return 0;
}