#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    vector<int> Vector(n);

    cout<<"Enter the array "<<endl;

    for(int i=0;i<n;i++){
        cin>>Vector[i];


    }
    int countOfZero=0;
    for(int i=0;i<Vector.size();i++){
        if(Vector[i]==0){
            countOfZero++;
        }

    }

    for(int i=0;i<Vector.size();i++){
        if(i<countOfZero){
            Vector[i]=0;
        }
        else{
            Vector[i]=1;
        }
    }

    cout<<"The Sorted Array is "<<endl;

    for(int i=0;i<Vector.size();i++){
        cout<<Vector[i]<<endl;
    }
    



    return 0;
}