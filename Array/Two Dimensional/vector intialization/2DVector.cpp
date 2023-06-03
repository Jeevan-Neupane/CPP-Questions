#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <vector<int>> V(3,vector<int>(4,0));

    for(int i=0;i<V.size();i++){
        for(int  j=0;j<4;j++){
            cout<<V[i][j]<<" ";
        }
        cout<<endl;
    }
    



    return 0;
}