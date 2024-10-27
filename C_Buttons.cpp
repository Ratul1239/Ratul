#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    int x=a+(a-1);
    int y=a+b;
    int z=b+(b-1);
    int ms=max(y,z);
    int mx=max(x,y);

    int ma=max(ms,mx);
    cout<<ma;
    return 0;
}