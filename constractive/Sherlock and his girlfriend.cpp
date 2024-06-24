/**
 *    author:  raj_001
 *    created: 2024-06-23 20:07:23
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;
const int N = 1e5;
bool prime[N];

void SieveOfEratosthenes(int n)
{
    for (int i = 0; i <= N; i++)
    {
        prime[i] = 1;
    }

    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << nl;
        cout << 1 << nl;
        return;
    }
    else if (n == 2)
    {
        cout << 1 << nl;
        cout << 1 << " " << 1 << nl;
        return;
    }
    cout << 2 << " " << nl;
    for (int i = 2; i <= n + 1; i++)
    {
        if (prime[i])
            cout << 1 << " ";
        else
            cout << 2 << " ";
    }
    cout << nl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    SieveOfEratosthenes(N);
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}