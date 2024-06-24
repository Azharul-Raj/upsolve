/**
 *    author:  raj_001
 *    created: 2024-06-24 10:14:24
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;

//

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    //
    int mn = INT_MAX, id1, id2;

    for (int i = 0; i < n - 1; i++)
    {
        string st = s.substr(i, 2);
        int val = stoi(st);
        if (val > 11 && val < mn)
        {
            mn = val;
            id1 = i;
            id2 = i + 1;
        }
    }
    int ans = mn;
    cout << ans;
    // for (int i = 0; i < n; i++)
    // {
    //     if (i == id1 || i == id2)
    //         continue;
    //     else if (s[i] > '1')
    //     {
    //         ans += (s[i] - '0');
    //     }
    // }
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}