#include<iostream>
#include<vector>
using namespace std;

int Factorial(int n){
    int value=1;
    for(int i=n;i>=1;i--){
        value*=i;
    }

    return value;
}

int main(){
    int n;
    cout<<"Number of rows to print "<<endl;
    cin>>n;
    // n=1;
   
       

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            int value=(Factorial(i)/(Factorial(j)*Factorial(i-j)));
            cout<<value<<" ";

        }
        cout<<endl;

    }
    



    return 0;
}