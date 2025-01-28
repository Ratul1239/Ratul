#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string a;
    cin>>a;
    if(a[0]=='a'||a[1]=='b'||a[2]=='c')
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    // for(int i=0;i<a.size();i++)
    // {
        // if(a[i]=='a'&&a[i+1]=='b'&&a[i+2]=='c')
        // {
        //     cout<<"YES"<<endl;
        //     break;
        // }
        // else if(a[i]=='a'&&a[i+1]=='c'&&a[i+2]=='b')
        // {
        //     cout<<"YES"<<endl;
        //     break;
        // }
        // else if(a[i]=='c'&&a[i+1]=='b'&&a[i+2]=='a')
        // {
        //     cout<<"YES"<<endl;
        //     break;
        // }
        // else if(a[i]=='b'&&a[i+1]=='a'&&a[i+2]=='c')
        // {
        //     cout<<"YES"<<endl;
        //     break;
        // }
        // else 
        // {
        //     cout<<"NO"<<endl;
        //     break;
        // }
   // }

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