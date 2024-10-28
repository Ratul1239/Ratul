#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int v=n;
    int l=0;
    while(n>0)
    {
       n=n/10;
       l++;
    }
    if(l==4)cout<<v<<endl;
    else if(l==3)cout<<"0"<<v<<endl;
    else if(l==2)cout<<"00"<<v<<endl;
    else if(l==1)cout<<"000"<<v<<endl;
    else cout<<"0000";
    return 0;
}