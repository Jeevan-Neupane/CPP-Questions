#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> V(5,0);
    V.push_back(5);
    for(int i=0;i<V.size();i++){
        cout<<V[i]<<endl;
    } 
    



    return 0;
}