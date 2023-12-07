#include<bits/stdc++.h>
#include <fstream>
using namespace std;

const int mod = 1000000;

int main()
{
    ofstream MyFile("2.in");
    srand (time(NULL));
    int b = rand()%8 +2;
    int e = 0;
    while(e<b){
        e = (rand()%(100));
    }
    MyFile << b << " " << e << endl;
    cout << b << " " << e << endl;
    for(int i = 0; i < e; i++)
    {
        int s = rand()%b, t = rand()%b, l = rand(), r = rand()%1;
        MyFile << s << " " << " " << t << " " << l << " " << r << endl;
        cout << s << " " << t << " " << l << " " << r << endl;
    }
    int p = rand()%100;
    MyFile << p << endl;
    cout << p << endl;
    for(int i = 0; i < p; i++)
    {
        int c = rand()%mod, d = rand()%mod;
        MyFile << c << " " << d << endl;
        cout << c << " " << d << endl;
    }
    MyFile.close();
}