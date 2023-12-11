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

    int k, g, m;
    cin>>k>>g>>m;
    int gg=0, mm=0;
    for(int i=0;i<k;i++)
    {
         if(gg==g)
         {
             gg=0;
         }
         else if(mm==0)
         {
             mm=m;
         }
         else
         {
             int need=g-gg;
             int gm=min(need, mm);
             mm-=gm;
             gg+=gm;
         }
    }

    cout<<gg<< " "<<mm<<endl;


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

