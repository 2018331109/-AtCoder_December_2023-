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

int a, b, c, n;

int recurse(int n, int mx)
{
    if(n<=0)
    {
        return mx;
    }
    return min({recurse(n-6, mx+a), recurse(n-8, mx+b), recurse(n-12, mx+c)});
}


void solve()
{
    cin>>n>>a>>b>>c;

    int ans=recurse(n, 0);

    cout<<ans<<endl;
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
