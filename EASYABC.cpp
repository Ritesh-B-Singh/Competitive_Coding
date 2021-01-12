#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;
    ll n = s.length();

    vector<ll> a, b, c;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'a')
            a.push_back(i);
        else if (s[i] == 'b')
            b.push_back(i);
        else
            c.push_back(i);
    }

    ll maxi = -1;

    ll mid = -1;

    if (a.size() != 0 && b.size() != 0)
    {

        mid = abs(a[0] - b[b.size() - 1]);
        maxi = max(maxi, mid);

        mid = abs(b[0] - a[a.size() - 1]);
        maxi = max(mid, maxi);
    }

    if (b.size() != 0 && c.size() != 0)
    {
        mid = abs(b[0] - c[c.size() - 1]);
        maxi = max(maxi, mid);

        mid = abs(c[0] - b[b.size() - 1]);
        maxi = max(mid, maxi);
    }

    if (a.size() != 0 && c.size() != 0)
    {
        mid = abs(a[0] - c[c.size() - 1]);
        maxi = max(mid, maxi);

        mid = abs(c[0] - a[a.size() - 1]);
        maxi = max(mid, maxi);
    }

    cout << maxi;
    return 0;
}