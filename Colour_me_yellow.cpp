#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n, r, g, b, ans = 0;
    cin >> n >> r >> g >> b;
    ll left = 0;
    ll right = min(n, min(r, b));
    while (left <= right)
    {
        ll mid = (left + right) / 2;
        ll k = (r - mid) + (b - mid) + g;
        if (k >= mid)
        {
            ans = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    ll t, n, r, g, b;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}