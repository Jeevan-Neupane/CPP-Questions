#include<iostream>
#include<vector>
using namespace std;

int MaximumOnes(vector<vector<int>> &V){
    int maximumOnes=INT16_MIN;
    int rowWithMax=-1;

    cout<<V[0].size()<<endl;

    for(int i=0;i<V.size();i++){
        for(int j=0;j<V[i].size();j++){
            if(V[i][j]==1){
                int numberOfOnes=V[i].size()-j;
                if(numberOfOnes>maximumOnes){
                    maximumOnes=numberOfOnes;
                    rowWithMax=i;
                    
                }
                break;
            }
        }
    }
    return rowWithMax;
}

int main(){
    int n,m;
    cout<<"Enter the rows in Vector"<<endl;
    cin>>n;
    cout<<"Enter the columns in vector"<<endl;
    cin>>m;
    vector <vector<int>> V(n,vector<int>(m));

    for(int i=0;i<V.size();i++){
        for(int j=0;j<V[i].size();j++){
            cin>>V[i][j];
        }
    }

    int row=MaximumOnes(V);

    cout<<"The row with maximum ones is "<<row<<endl;

    
    



    return 0;
}