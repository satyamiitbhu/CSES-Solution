#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ll long long
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
#define mem0(a) memset(a, 0, sizeof(a));
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
// ```````````````````````````````````````````
#define PI 3.141592653589793238462643
const ll hell = 1000000007;
const ll mod = 1000000007;
//Hello_Dude---------------------------------------
void solve()
{
    int n, m, k;
    cin >> m >> n >> k;
    vi a(m), b(n);
    rep(i, 0, m)
    {
        cin >> a[i];
    }
    rep(i, 0, n)
    {
        cin >> b[i];
    }
    sort(all(a));
    sort(all(b));

    int i = 0, j = 0;
    int cnt = 0;
    while (i < m and j < n)
    {
        if (abs(a[i] - b[j]) <= k)
        {
            cnt++;
            i++;
            j++;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    cout << cnt;

    return;
}
//MAIN---------------------------------------
signed main()
{
    IOS;
    int t = 1;
    // cin >> t;
    for (int T = 1; T <= t; T++)
    {

        //cout << "Case #" << T << ": ";
        solve();
        cout << endl;
    }
    return 0;
}
