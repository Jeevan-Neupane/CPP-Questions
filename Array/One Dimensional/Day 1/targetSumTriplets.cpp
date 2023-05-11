#include<iostream>
using namespace std;

int main(){
    int array[]={3,1,2,4,0,6};
    int size=sizeof(array)/sizeof(array[0]);
    int targetSum=5;
    int triplets=0;

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
                if(targetSum==array[i]+array[j]+array[k]){
                    triplets++;
                    
                }

            }

        }
    }

    cout<<triplets<<endl;





    return 0;
}