#include<iostream>
using namespace std;

int main(){
    int array[][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++){
        for(int j=0;j<i;j++){
           int temp=array[i][j];
           array[i][j]=array[j][i];
           array[j][i]=temp;
        }
        
       
    }
    for(int i=0;i<3;i++){
        int j=0;
        int k=3-1;

        while(j<=k){
            swap(array[i][j],array[i][k]);
            j++;
            k--;
        }
        
       
    }

    

    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
       
    }





    return 0;
}