#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int r,c;
    cin>>r>>c;
    int Rcb_win=r-c;
    if(Rcb_win>=18)cout<<"RCB"<<endl;
    else cout<<"CSK"<<endl;
    return 0;
}