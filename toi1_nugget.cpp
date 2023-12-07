#include<bits/stdc++.h>
using namespace std;


bool nug[110] = {};

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;

    if(n < 6)
    {
        cout << "no";
        return 0;
    }

    int sum = 0;
    nug[0] = true;
    for(int i = 6; i <= n; i++)
    {
        if(nug[i - 6]) nug[i] = true;
        else if(i >= 9 && nug[i - 9]) nug[i] = true;
        else if(i >= 20 && nug[i - 20]) nug[i] = true;
    }

    for(int i = 6; i <= n; i++)
    {
        if(nug[i])
        {
            cout << i << endl;
        }
    }
}