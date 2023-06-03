#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector <int> ans;
    ans.resize(5);
    for(int i=0;i<ans.size();i++){
        ans[i]=5;
    }
    cout<<"The Vector is "<<endl;
    ans.resize(3);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    



    return 0;
}