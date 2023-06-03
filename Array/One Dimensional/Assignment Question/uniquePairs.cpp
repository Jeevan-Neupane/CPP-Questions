#include<iostream>
using namespace std;

int main(){
    int array[]={1,2,3,4,6};
    int size=sizeof(array)/sizeof(array[0]);
    int x=7;
    int  pair=0;

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if((array[i]+array[j])==x){

                pair++;

            }
        }

    }

    cout<<"Number of pair are "<<pair<<endl;



    return 0;
}