#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int m, n;
    cin >> m >> n;
    int Matrix[m + 1][n + 1] = {};
    for(int round = 0; round < 2; round++)
    {
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                int input;
                cin >> input;
                Matrix[i][j] += input;
            }
        }
    }
    
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << Matrix[i][j] << " ";
        }
        cout << endl;
    }
}