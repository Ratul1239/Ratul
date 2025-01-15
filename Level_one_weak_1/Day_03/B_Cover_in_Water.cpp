#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string a;
    cin>>a;
    int emty=0,wal=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]=='.'&&a[i+1]=='.'&&a[i+2]=='.')
        {
            emty=1;
        }
        else if(a[i]=='#')
        {
            wal++;
        }
    }
    //cout<<emty<<" "<<wal<<endl;
    if(emty==1)
    {
        cout<<2<<endl;
    }
    else{
        cout<<n-wal<<endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}