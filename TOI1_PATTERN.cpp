#include<bits/stdc++.h>
using namespace std;
char answer[50100][80];
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    memset(answer, 'o', sizeof(answer));
    int max_roll = 0;
    for (int i = 1; i <= n; i++) {
        int p, q, r;
        cin >> p >> q >> r;
        max_roll = max(max_roll, p);
        for (int j = q; j <= min(q + r - 1, 70); j++) {
            answer[p][j] = 'x';
        }
    }
    for (int i = 1; i <= max_roll; i++) {
        for (int j = 1; j <= 70; j++) {
            cout << answer[i][j];
        }
        cout << '\n';
    }
}