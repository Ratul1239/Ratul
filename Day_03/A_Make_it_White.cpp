#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int left_pos=-1,right_pos=-1;
        left_pos=s.find('B');
        right_pos=s.rfind('B');
        int ans=right_pos-left_pos;
        cout<<ans+1<<endl;
    }
    return 0;
}