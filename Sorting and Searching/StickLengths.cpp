
#include <bits/stdc++.h>
// #include<iostream.h>
// hacktoberfest done

using namespace std;

#define int long long
#define ld long double
#define pb push_back
#define pp pop_back()
#define pii pair<int, int>
#define vi vector<int>
#define vs vector<string>
#define vii vector<pii>
#define mi map<int, int>
#define mii map<pii, int>
#define mp make_pair
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), a.rend()
#define F first
#define S second
#define sz(x) (int)x.size()
#define endl '\n'
#define rep(i, a, b) for (int i = a; i < b; i++)
#define mem(a, x) memset(a, x, sizeof(a));
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
// ```````````````````````````````````````````
#define PI 3.141592653589793238462643
const int hell = 1000000007;
const int mod = 1000000007;
//Hello_Dude---------------------
void solve()
{
    int n;
    cin >> n;
    vi v(n);
    int sum = 0;
    rep(i, 0, n)
    {
        cin >> v[i];
        sum += v[i];
    }
    sort(all(v));
    int x = v[n / 2];
    int ans = 0;
    rep(i, 0, n)
    {
        ans += abs(v[i] - x);
    }
    cout << ans;
    return;
}
//MAIN---------------------------
signed main()
{
    IOS int t = 1;
    // cin >> t;
    for (int T = 1; T <= t; T++)
    {
        //cout << "Case #" << T << ": ";
        solve();
        cout << endl;
    }
    return 0;
}
