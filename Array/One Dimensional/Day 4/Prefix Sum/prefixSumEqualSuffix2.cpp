#include<iostream>
using namespace std;

int main(){

     int array[] = {1, 2, 3, 4, 1, 0, 1};
    int size = sizeof(array) / sizeof(array[0]);
    int prefix = 0;
    int suffix = 0;
    int sum=0;

    for(int i=0;i<size;i++){
        sum=sum+array[i];
    }
   
   for(int i=0;i<size;i++){
    prefix+=array[i];
    suffix=sum-prefix;
    if(suffix==prefix){
        cout<<"Yes they can be break into two  subarray of equal sum"<<endl;
        break;
    }
   }



    return 0;
}