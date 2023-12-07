#include<bits/stdc++.h>
using namespace std;


int Worker[25] = {};
int Soldier[25] = {};

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int soldier = 0, worker = 1;
    for (int i = 1; i < 25; i++)
        {
            worker += soldier;
            soldier += worker - 2 * soldier;
            worker += 1;
            Worker[i] = worker;
            Soldier[i] = soldier;
        }

    while(1)
    {
        int x;
        cin >> x;
        if(x == -1)return 0;
        cout << Worker[x] << " " << Worker[x] + Soldier[x] + 1 << endl;
    }
}