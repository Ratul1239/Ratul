#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int A,B,T;
    cin>>A>>B>>T;
    int bisket=(T + 0.5) / A ;
    int mot_bis=floor(bisket*B);
    cout<<mot_bis;
    return 0;
}