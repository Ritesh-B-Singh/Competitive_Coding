#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n, mx = INT_MIN, cnt = 0, i = 0;
    cin >> n;
    ll arr[n], cp[1001] = {0};
    for (i; i < n; i++)
    {
        cin >> arr[i];
        cp[arr[i] - 1] += 1;
    }
    for (i = 0, cnt = 0; i < 1001; i++)
    {
        cnt += (cp[i] + 1) / 2;
    }
    cout << cnt << "\n";
    return 0;
}