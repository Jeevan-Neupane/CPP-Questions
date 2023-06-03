#include<iostream>
using namespace std;

int main(){
    int array[][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    int l1=0;
    int r1=0;
    int l2=3;
    int r2=2;

    int sum=0;

    for(int i=r1;i<=r2;i++){
        for(int j=l1;j<=l2;j++){
            sum+=array[i][j];
            
        }
    }

    cout<<sum<<endl;




    return 0;
}