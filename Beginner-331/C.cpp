#include <bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define neg cout << -1 << endl;
#define pb push_back
int mod = 1e9 + 7;
int md = 998244353;

const int INF = 1e18;

void solve()
{
     int n;
     cin>>n;
     int a[n];
     map<int, int>mp;

     for(int i=0;i<n;i++)
     {
         cin>>a[i];
         mp[a[i]]++;
     }

     vector<int>v;
     int total=0;
     for(auto it:mp)
     {
         int k=it.first;
         int vl=it.second;
         total+=(k*vl);
         mp[k]=total;

     }

     for(int i=0;i<n;i++)
     {
         cout<<total-mp[a[i]]<<" ";
     }

}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test = 1;
    //cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}

