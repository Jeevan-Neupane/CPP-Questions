#include<iostream>
using namespace std;

int main(){
    int array[]={2,3,5,7,6,1,7};
    int size=sizeof(array)/sizeof(array[0]);
    int largest=INT16_MIN;
    int secondLargest=INT16_MIN;

    for(int i=0;i<size;i++){
        if(array[i]>largest){
            secondLargest=largest;
            largest=array[i];
        }
        else if(array[i]>secondLargest && largest>array[i]){
            secondLargest=array[i];
        }
    }

    cout<<secondLargest<<endl;



    return 0;
}