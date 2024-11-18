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
        int a,b;
        cin>>a>>b;
        //cout<<a<<b<<endl;
        if(a<=2&&b<=2)
        {
            //cout<<"r";
            if(a==b)cout<<a<<endl;
            else if(a>b)cout<<b<<endl;
            else cout<<a<<endl;
        }
        else
        {
            int a_dow=a%3;
            int b_dow=b%3;
            cout<<min(a_dow,b_dow)<<endl;
        }
    }
    return 0;
}