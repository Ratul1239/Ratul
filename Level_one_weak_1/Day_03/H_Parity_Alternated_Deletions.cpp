#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>e;
    vector<int>o;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            e.push_back(a[i]);
        }
        else{
            o.push_back(a[i]);
        }
    }
    long long int sum=0;
    if(e.size()==o.size()||e.size()+1==o.size()||e.size()==o.size()+1)
    {
        cout<<0<<endl;
    }
    else{
        if(o.size()>e.size())
        {
            for(int i=0;i<e.size()+1;i++)
            {
                o.pop_back();
            }
            for(int i=0;i<o.size();i++)
            {
                sum+=o[i];
            }
            cout<<sum<<endl;
        }
        else
        {
            for(int i=0;i<o.size()+1;i++)
            {
                e.pop_back();
            }
            for(int i=0;i<e.size();i++)
            {
                sum+=e[i];
            }
            cout<<sum<<endl;
        } 
    }
}