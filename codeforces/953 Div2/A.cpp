/**
 *    author:  raj_001
 *    created: 2024-06-16 15:00:56
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    ll total = 0;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    total = a.back();
    a.pop_back();
    total += (*max_element(a.begin(), a.end()));
    cout << total << nl;
}

int main()
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