#include <iostream>
#include <vector>

using namespace std;
void Transpose(vector<vector<int>> &V)
{
    for (int i = 0; i < V.size(); i++)
    {
        for (int j = 0;j<=i; j++)
        {
            swap(V[i][j],V[j][i]);
            
        }
    }
}

void RotateBy90(vector<vector<int>> &V){
    Transpose(V);

    for (int i = 0; i < V.size(); i++)
    {
      int j=0;
      int k=V[i].size()-1;
      while(j<=k){
        swap(V[i][j],V[i][k]);
        j++;
        k--;
      }
    }



}

int main()
{
    int n, m;
    cout << "enter the number of row and column of matrix" << endl;
    cin >> n >> m;
    vector<vector<int>> V(n, vector<int>(m));

    cout<<"Enter the vector "<<endl;

    for (int i = 0; i < V.size(); i++)
    {
        for (int j = 0; j<V[i].size(); j++)
        {
            cin >> V[i][j];
        }
    }

    RotateBy90(V);


   cout<<"Output of the vector is "<<endl;
    

    for (int i = 0; i < V.size(); i++)
    {
        for (int j = 0; j<V[i].size(); j++)
        {
            cout << V[i][j] << endl;
        }
        cout << endl;
    }

    return 0;
}