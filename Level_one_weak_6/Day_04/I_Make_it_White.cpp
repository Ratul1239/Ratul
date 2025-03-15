#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;cin>>n;
    string s;
    cin>>s;
     int f_indx=0;
    int frist_indx=0;
    int last_indx=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='B')
        {
            f_indx=i;
            break;
        }
        
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]=='B')
        {
            frist_indx=i;
            if(frist_indx>last_indx)
            {
                last_indx=frist_indx;
            }
        }
    }
    cout<<(last_indx-f_indx)+1<<endl;
    //cout<<last_indx<<f_indx<<endl;
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