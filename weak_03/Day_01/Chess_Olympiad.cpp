#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y,z;
    cin>>x>>y>>z;
    if((x+y+z)!=4)
    {
        int baki=4-(x+y+z);
        int me=x+y+baki;
        int you=y+z;
        if(me>you)cout<<"Yes";
        else cout<<"No";
    }
    else if((x+z)==4)
    {
        cout<<"No";
    }
    else 
    {
        int me=x+y;
        int you=y+z;
        if(me>you)
        {
            cout<<"Yes";
        }
        else cout<<"No";
    }

    return 0;
}