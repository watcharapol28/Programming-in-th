#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    while(1)
    {
        int x;
        cin >> x;
        if(x == -1)return 0;
        int soldier = 0, worker = 1;
        for (int i = 0; i < x; i++)
        {
            worker += soldier;
            soldier += worker - 2 * soldier;
            worker += 1;
        }
        cout << worker << " " << worker + soldier + 1 << endl;
    }
}