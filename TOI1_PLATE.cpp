#include<bits/stdc++.h>
using namespace std;
//25/11/2564
struct x
{
    int a,b;
};
int num[100010];
int main()
{
    int nc,ns,z;
    char n;

    cin >> nc >> ns;

    bool check[nc+1]={};
    queue<int> clas;
    queue<int> stu[nc+1];
    struct x xx[ns+1];

    for(int i = 0; i < ns; i++)
    {
        cin >> xx[i].a >> xx[i].b;
        num[xx[i].b] = i;
    }
    while(1)
    {
        cin >> n;
        if(n == 'X'){cout << '0'; return 0;}
        if(n == 'E')
        {
            cin >> z;
            stu[xx[num[z]].a].push(num[z]);
            if(!check[xx[num[z]].a]){clas.push(xx[num[z]].a); check[xx[num[z]].a] = true;}
        }
        else if(n == 'D')
        {
            cout << xx[stu[clas.front()].front()].b << endl;
            stu[clas.front()].pop();
            if(stu[clas.front()].empty()){check[clas.front()] = false; clas.pop();}
        }
    }
}