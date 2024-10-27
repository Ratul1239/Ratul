#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int A,B,C;
    cin>>A>>B>>C;
    int cnt=A;
    for(int i=A;i<=B;i++)
    {
        if(cnt%C!=0)
        {
            cnt++;
        }
    }
    if (cnt <= B) {
        cout << cnt;
    } else {
        cout << -1;
    }
    return 0;
}