#include<bits/stdc++.h>
using namespace std;

int x[20][20];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    memset(x,-1,sizeof(x));
    int n, ans = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> x[i][j];
        }
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            int c = x[i][j], xx = 0,yy = 0;
            if(x[i+1][j+1] != c && x[i+1][j-1] != c && x[i-1][j+1] != c && x[i-1][j-1] != c)
            {
                if(x[i+1][j] == c){xx++;}
                if(x[i-1][j] == c){xx++;}
                if(x[i][j+1] == c){yy++;}
                if(x[i][j-1] == c){yy++;}
            }
            if(xx == 1 && yy == 1){ans++;}
        }
    }
    cout << ans;
    
}