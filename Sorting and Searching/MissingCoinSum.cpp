
#include <bits/stdc++.h>
using namespace std;
// bndi

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
#define mem(a, x) memset(a, x, sizeof(a));
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
// ```````````````````````````````````````````
#define PI 3.141592653589793238462643
const ll hell = 1000000007;
const ll mod = 1000000007;
//Hello_Dude---------------------
void solve()
{
    int n;
    cin >> n;
    int a[n];
    rep(i, 0, n)
    {
        cin >> a[i];
    }
    /*At any index i in a sorted array a, currSum represents sum(a[ 0...i ]).
    We can form every possible sum from 1...currSum, when we are at index i. So the next possible smallest sum at index i can be currSum+1.
    We can get currSum+1 as the answer if and only if a[i+1] > currSum + 1, otherwise we would be able to form subsets with sums from 1...(currSum + a[i+1])
    ( just add a[i+1] to all subsets which give sum 1...currSum to get subsets giving sum 1...currSum+a[i+1]).

    Try this on pen and paper and it will be more clear.*/
    sort(a, a + n);
    int curSum = 1;
    for (int i = 0; i < n; i++)
    {
        if (curSum < a[i])
        {
            break;
        }
        else
        {
            curSum += a[i];
        }
    }
    cout << curSum;
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
