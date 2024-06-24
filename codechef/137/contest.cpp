/**
 *    author:  raj_001
 *    created: 2024-06-24 08:01:35
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;

//
int calculate(string s, int n)
{
    int ans = INT_MAX;
    for (int i = 0; i < n - 1; i++)
    {
        string st = s.substr(i, 2);
        int val = stoi(st);
        // cout << val << nl;
        for (int j = 0; j < n; j++)
        {
            if (j == i or j == i + 1 || s[j] == '1')
                continue;
            else
            {
                if (val == 1)
                {
                    val--;
                }
                val += (s[j] - '0');
            }
            // cout << val << nl;
        }
        ans = min(ans, val);
    }
    return ans;
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n == 2)
        cout << stoi(s) << nl;
    else if (n == 3)
    {
        if (s[0] == '0' || s[n - 1] == '0')
            cout << 0 << nl;
        else
        {
            cout << calculate(s, n) << nl;
        }
    }
    else
    {
        int zero = count(s.begin(), s.end(), '0');
        if (zero)
            cout << 0 << nl;
        else
        {
            cout << calculate(s, n) << nl;
        }
    }
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