#include <iostream>
#include <vector>
using namespace std;
int MaximumOnes(vector<vector<int>> &V)
{
    int leftMostOne=-1;
    int rowWithMax = -1;

    int j=V[0].size();
    
    while(j>=0 && V[0][j]==1){
        leftMostOne=j;
        rowWithMax=0;
        j--;
    }

    for(int i=1;j<V.size();i++){
        while(j>=0 && V[i][j]==1){
            leftMostOne=j;
            j--;
            rowWithMax=i;

        }
    }

    
   

    return rowWithMax;
}
int main()
{
    int n, m;
    cout << "Enter the rows in Vector" << endl;
    cin >> n;
    cout << "Enter the columns in vector" << endl;
    cin >> m;
    vector<vector<int>> V(n, vector<int>(m));

    for (int i = 0; i < V.size(); i++)
    {
        for (int j = 0; j < V[i].size(); j++)
        {
            cin >> V[i][j];
        }
    }

    int row = MaximumOnes(V);

    cout << "The row with maximum ones is " << row << endl;

    return 0;
}