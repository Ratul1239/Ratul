#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int a,b;
    int c,d;
    cin>>a>>b;
    cin>>c>>d;
    if(max(a,b)==max(c,d) && min(a,b)+min(c,d)==max(a,b)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    }
}