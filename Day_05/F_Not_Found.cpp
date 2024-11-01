#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    bool present[26]={false};
    for(char ch:s)
    {
        present[ch-'a']={true};
    }
    char missletter='0';
    for(int i=0;i<26;i++)
    {
        if(!present[i])
        {
            missletter='a'+i;
            break;
        }
    }
    if(missletter=='0')
    {
        cout<<"None"<<endl;
    }
    else {
        cout<<missletter<<endl;
    }
    return 0;
}