/**
 *    author:  raj_001
 *    created: 2024-06-16 15:46:08
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve()
{
    ll total = 0;
    ll n, a, b;
    cin >> n >> a >> b;
    int price = b;
    if (a >= b)
    {
        total = n * a;
    }
    else if (b - a >= n)
    {

        ll inn = b - n;
        ll ex = (inn * (inn + 1)) / 2;
        ll tot = (b * (b + 1)) / 2;
        total = tot - ex;
    }
    else
    {
        ll ex = (a * (a + 1)) / 2;
        ll tot = (b * (b + 1)) / 2;
        total = tot - ex;
        ll rest = n - (b - a);
        total += rest * a;
    }
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