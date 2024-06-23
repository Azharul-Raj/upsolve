/**
 *    author:  raj_001
 *    created: 2024-06-20 22:52:15
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;

void solve()
{
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> a(2e5 + 1), cnt(2e5 + 1), sum(2e5 + 1, 0);
    int mn = INT_MAX, mx = INT_MIN;
    while (n--)
    {
        int l, r;
        cin >> l >> r;
        mn = min(mn, min(l, r));
        mx = max(mx, max(l, r));
        a[l] += 1;
        a[r + 1] -= 1;
    }
    //
    for (int i = 1; i <= 2e5; i++)
    {
        cnt[i] = cnt[i - 1] + a[i];
    }
    for (int i = mn; i <= mx; i++)
    {
        if (cnt[i] >= k)
        {
            cnt[i] = 1;
        }
        else
            cnt[i] = 0;
    }
    for (int i = mn - 1; i <= 2e5; i++)
    {
        sum[i] = sum[i - 1] + cnt[i];
    }
    //
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        int diff = sum[b] - sum[a - 1];
        if (diff > 0)
            cout << diff << nl;
        else
            cout << 0 << nl;
    }
    //
    // for (int i = mn; i <= mx; i++)
    // {
    //     cout << sum[i] << " ";
    // }
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    //    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}