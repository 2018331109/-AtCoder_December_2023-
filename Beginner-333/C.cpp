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
    vector<int>ans;
    int cnt=0;
    int a=1, b=1, c=1;
    int boro=10;
    int jog1=10, jog2=10;
    while(ans.size()<335)
    {
        ans.pb(a+b+c);
        if(a==b && b==c)
        {
            //ans.pb(a+b+c);
            a=1, b=1, c+=boro;
            boro*=10;
            jog1=10;
        }
        else if(a==b)
        {
            b+=jog1;
            jog1*=10;
            a=1;
            jog2=10;
            //ans.pb(a+b+c);
        }
        else
        {
            a+=jog2;
            jog2*=10;
            //ans.pb(a+b+c);
            //jog*=10;
        }
    }

    for(int i=0;i<20;i++)
    {
        //cout<<ans[i]<<endl;

    }

    cout<<ans[n-1]<<endl;

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

