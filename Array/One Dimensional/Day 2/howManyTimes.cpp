#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int n;
    cout << "Enter the size of array " << endl;
    cin >> n;

    vector<int> v(n);

    cout << "Enter Array " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int N=10e5;
    vector<int> V(N,0);

    for(int i=0;i<n;i++){
        V[v[i]]++;

    }

    int numberOfQuiries;
    cout<<"Enter the number of quiries "<<endl;
    cin>>numberOfQuiries;

    while(numberOfQuiries--){
        int n;
        cout<<"Enter the number"<<endl;
        cin>>n;
        cout<<V[n]<<endl;


    }
    

  
    return 0;
}