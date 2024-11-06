#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    multiset<int>ml;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        ml.insert(x);
    }
    int ans=0,solve=1;
    while(!ml.empty())
    {
        auto lb=ml.lower_bound(solve);
        if(lb!=ml.end())
        {
            ans++;
           ml.erase(lb);
        }
        else 
        {
            break;
        }
        solve++;
    }
    cout<<ans<<endl;
    return 0;
}