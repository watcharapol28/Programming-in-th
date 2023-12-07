#include<bits/stdc++.h>
using namespace std;

int head[1000100];
struct X
{
    int s, t;
    long long w;
    bool operator < (const X &b) const
    {
        return w > b.w;
    }
}x[1000100];


int find_head(int x)
{
    return head[x] = (head[x] != x) ? find_head(head[x]) : x;
}


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n,m;
    cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        cin >> x[i].s >> x[i].t >> x[i].w;
    }
    sort(x, x + m);
    for(int i = 0; i < m; i++){head[i] = i;}
    
    long long sum=0;
    for(int i = 0; i < m; i++)
    {
        if(find_head(x[i].s) != find_head(x[i].t))
        {
            sum += x[i].w - 1;
            head[find_head(x[i].t)] = head[find_head(x[i].s)];
        }
    }
    cout << sum;
}