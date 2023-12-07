#include<bits/stdc++.h>
using namespace std;

char x[30010][1010];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int L, N;
    cin >> L >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> x[i];
    }
    for(int i = 0; i < N; i++)
    {
        int check = 0;
        for(int j = 0; j < L; j++)
        {
            if( x[i][j] != x[i + 1][j] ) {check++;}
        }
        if(check > 2)
        {
            cout << x[i]; break;
        }
    }
}
