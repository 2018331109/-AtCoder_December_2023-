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

    int n, plain;
    int logo=0, total=0, mx=0;

    cin>>n>>plain;
    string s;
    cin>>s;
    int pl=plain;

    for(int i=0; i<n; i++)
    {
        if(s[i]=='0')
        {
            mx=logo;
            plain=pl;
        }
        else if(s[i]=='1')
        {
            if(plain>0)
            {
                plain--;
            }
            else if(mx>0)
            {
                mx--;
            }
            else
            {
                logo++;
            }
        }
        else
        {
            if(mx>0)
            {
                mx--;
            }
            else
            {
                logo++;
            }
        }

    }

    cout<<logo<<endl;
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

