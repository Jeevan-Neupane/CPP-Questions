#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> pascalTriangle(int n)
{
    vector<vector<int>> ans(n);
    for (int i = 0; i < n; i++)
    {
        ans[i].resize(i + 1);
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                ans[i][j] = 1;
            }
            else
            {

                ans[i][j] = ans[i - 1][j] + ans[i - 1][j - 1];
            }
        }
    }

    return ans;
}

int main()
{
    int n;
    n = 4;

    vector<vector<int>> ans;
    ans = pascalTriangle(n);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}