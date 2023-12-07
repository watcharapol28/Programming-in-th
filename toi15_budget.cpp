#include<bits/stdc++.h>
using namespace std;

const int lim = 1e8 + 5;

struct STLR
{
    int s,t,l,r;
    bool operator < (const STLR &b)const
    {
        return l<b.l;
    }
};
struct CD
{
    int l,p;
    bool operator < (const CD &b)const
    {
        return p<b.p;
    }
};
vector <STLR> p;
vector <CD>  pp;
int head[lim];

int find_head(int x)
{
    return head[x] = (head[x] != x) ? find_head(head[x]) : x;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int b,e;
    cin >> b >> e;
    for(int i = 0; i < e; i++)
    {
       int s, t, l, r;
       cin >> s >> t >> l >> r;
       p.push_back({s, t, l, r});
    }
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
       int c, d;
       cin >> c >> d;
       pp.push_back({c, d});
    }
    sort(pp.begin(), pp.end());
    for(int i = 0; i < e; i++)
    {
       if(p[i].r == 1){p[i].l = 0;}
       else
       {
            for(int j = 0; j < n; j++)
            {
                if(pp[j].l >= p[i].l)
                {
                    p[i].l = pp[j].p; 
                    break;
                }
            }
       }
    }
    sort(p.begin(), p.end());
    for(int i = 0; i < b; i++)
    {
        head[i] = i;
    }
    int sum = 0;
    for(int i = 0; i < e; i++)
    {
        if(find_head(p[i].s) != find_head(p[i].t))
        {
            sum += p[i].l;
            head[find_head(p[i].s)] = head[find_head(p[i].t)];
        }
    }
    for(int i = 0 ; i < b; i++)
    {
        cout << i << " " << head[i] << endl;
    }
    cout << sum;
}
