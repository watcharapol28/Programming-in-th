#include<bits/stdc++.h>
using namespace std;

//same problem with toi2 Bee

int main()
{
    int x;
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