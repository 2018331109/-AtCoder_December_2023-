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

bool comp(const std::pair<int, int>& p, const std::pair<int, int>& q)
{
    if (p.first > q.first)
    {
        return true;
    }
    else if (p.first == q.first)
    {
        return p.second < q.second;
    }
    return false;
}

void solve()
{
    map<string, int>mp
    {
        {"AB",1}, {"AC",2},{"AD",2},{"AE",1},{"BC",1},{"BD",2},{"BE",2},{"CD",1},{"CE",2}, {"DE", 1}
    };

    string s, p;
    cin>>s>>p;
    sort(s.begin(), s.end());
    sort(p.begin(), p.end());
    if(mp[s] == mp[p])
    {
        yes;
    }
    else
    {
        no;
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

