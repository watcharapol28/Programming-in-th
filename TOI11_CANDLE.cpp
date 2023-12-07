#include<bits/stdc++.h>
using namespace std;

queue <pair<int, int> > q;
int n, m;
char x[2010][2010];
int ans = 0;


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> n >> m;

    for(int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(x[i][j] == '1')
            {
                ans++;
                x[i][j] = '0';
                q.push({i, j});
            }

            while(!q.empty())
            {
                pair<int, int> top = q.front();
                q.pop();

                for(int ii = top.first - 1; ii < top.first + 2; ii++)
                {
                    for(int jj = top.second - 1; jj < top.second + 2; jj++)
                    {
                        if(x[ii][jj] == '1')
                        {
                            q.push({ii, jj});
                            x[ii][jj] = '0';
                        }
                    } 
                }
            }

        }
    }
    cout << ans;
}