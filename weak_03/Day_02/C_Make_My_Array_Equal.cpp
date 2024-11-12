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
        vector<int>v(n);
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]!=0)
            {
                m[v[i]]++;
            }
        }
        if(m.size()>1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}