// not now 0/100

#include<bits/stdc++.h>
using namespace std;

int v[10010][10010];
int mn[10010];

int main()
{
    ios_base::sync_with_stdio();cin.tie(0);

    int n, m, q;
    int c[510];
    cin >> n >> m >> q;
    for(int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    for(int i = 0; i < m; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        v[a-1][b-1]=c;
        v[b-1][a-1]=c;
    }
    for(int i = 0; i < n; i++)
    {
        int mmn = INT_MAX;
        for(int j = 0; j < n; j++)
        {
            if(mmn>v[i][j]){mn[i] = j;mmn = v[i][j];}
        }
    }
    for(int i = 0; i < q; i++)
    {
        int a,b;
        cin >> a >> b;
        int base;
        (v[a-1][b-1] < c[a-1]+c[b-1])?base = v[a-1][b-1]:base = c[a-1]+c[b-1];

        (base<v[i][mn[i]])?cout<<base<<" 2"<<endl:cout<<v[i][mn[i]]<<" 4"<<endl;
    }
}
/*
vector<pair<int,int>> vec[10010];

int main()
{
    ios_base::sync_with_stdio();cin.tie(0);
    int n, m, q;
    long c[510];
    cin >> n >> m >> q;
    for(int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    for(int i = 0; i < m; i++)
    {
        int a,b,c;
        cin >> a >> b >> c;
        vec[a].push_back({c,b});
        vec[b].push_back({c,a});
    }
    for(int i = 0; i < m; i++)
    {
        sort(vec[i].begin(), vec[i].end());
    }

    for(int i = 0; i < q; i++)
    {
        int a,b;
        cin >> a >> b;
        int base = c[a-1] + c[b-1];
        (vec[a-1][0].first + vec[b-1][0].first > base)?cout << base << " 2" <<endl :cout << vec[a][0].first + vec[b][0].first<< " 4"<<endl;
    }
}
*/