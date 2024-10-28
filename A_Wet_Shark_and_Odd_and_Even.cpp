#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    long long int sum = 0;
    int size = v.size();

    
        for (int i = 0; i < size; i++) {
            sum += v[i];
        }
        if(sum%2==0)cout<<sum<<endl;
        else {
            int mm=INT_MAX;
            for(int i=0;i<size;i++)
            {
                if(mm>v[i]&&v[i]%2==1)
                {
                    mm=v[i];
                }
            }
            cout<<sum-mm;
        }
    return 0;
}
