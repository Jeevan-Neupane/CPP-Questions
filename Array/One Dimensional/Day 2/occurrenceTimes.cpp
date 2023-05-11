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

    int N = 100;

    vector<int> frequencyArray(N, 0);

    for (int i = 0; i < n; i++)
    {
        frequencyArray[v[i]]++;
    }

    int noOfQuiries;
    cout << "Enter the number of quiries" << endl;
    cin >> noOfQuiries;

    while (noOfQuiries--)
    {
        int queryEl;
        cout << "Enter the query Element" << endl;
        cin>>queryEl;
        cout << frequencyArray[queryEl] << endl;
    }

    return 0;
}