#include<bits/stdc++.h>
using namespace std;

#define ft first 
#define sc second

const int num = 50010;

int x[num];
int y[num];
int head[num];

int find_head(int x)
{
    return head[x] = (head[x]!=x)?find_head(head[x]):x;
}

priority_queue<int> pq;
vector <pair<int, pair<int, int>>> vec;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);

    int n, k;
    cin >> n >> k;

    for(int i = 0 ; i < n ; i++)
    {
        cin >> x[i] >> y[i];
        for(int j = 0 ; j < i ; j++)
        {
            vec.push_back({abs(x[j]-x[i]) + abs(y[j]-y[i]) , {i , j} });
        }
    }
    sort(vec.begin(),vec.end());
    
    for(int i = 0 ; i < n ; i++){head[i] = i;}

    int ans = 0, check = 0, last_k = 0;
    for(int i = 0 ; i < vec.size() ; i++)
   {
       if(find_head(vec[i].sc.ft) != find_head(vec[i].sc.sc))
       {
           pq.push(vec[i].ft);
           ans += vec[i].ft;
           head[find_head(vec[i].ft)] = head[find_head(vec[i].sc.sc)];
       }
   }
//   cout << ans << endl;
   for(int i = 0;i < k-1; i++)
   {
       ans -= pq.top();
       pq.pop();
   }
   cout << ans;

}