#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    vector<long long>v;
    for(int i=a;i<=b;i++)
    {
        if(i%c==0) v.push_back(i);
    }

    if(v.size() == 0) cout << -1 << endl;
    else for(auto x : v) cout << x <<" ";
    return 0 ;
}