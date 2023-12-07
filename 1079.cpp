#include<bits/stdc++.h>
using namespace std;

int dp[100010] = {};
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int N, K, now = 0;
    cin >> N >> K;
    dp[0] = 1;
    for(int i = 1; i <= N; i++)
    {
        if(i <= K) now += dp[i - 1];
        else now += dp[i-1] - dp[i - K - 1];
        dp[i] = now % 2009;
    }
    cout << dp[N];
}