/**
 *    author:  raj_001
 *    created: 2024-06-17 19:44:19
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;

void solve()
{
   int n, k;
   cin >> n >> k;
   vector<int> a(n + 1);
   int mx = 0, qq = n;
   for (int i = 1; i <= n; i++)
   {
      a[i] = i;
      mx += abs(i - qq);
      qq--;
   }
   if (k % 2 || (k > mx))
   {
      cout << "NO" << nl;
      return;
   }

   k /= 2;
   int x = n - 1;
   for (int i = 1; i <= n; i++)
   {
      if (k <= x)
      {
         swap(a[i], a[i + k]);
         k = 0;
         break;
      }
      //
      swap(a[i], a[i + x]);
      k -= abs(a[i] - a[i + x]);
      x -= 2;
   }
   cout << "YES" << nl;
   for (int i = 1; i <= n; i++)
      cout << a[i] << " ";
   cout << nl;
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