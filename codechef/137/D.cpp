#include <bits/stdc++.h>
using namespace std;

int main()
{
   // your code goes here
   int t;
   cin >> t;

   while (t--)
   {
      int n;
      cin >> n;

      vector<int> A(n), B(n);
      for (int i = 0; i < n; ++i)
      {
         A[i] = i + 1;
      }

      int j = 0;
      int sechalf = n / 2;
      for (int i = sechalf; i < n; i++)
      {
         B[j] = A[i];
         j++;
      }

      for (int i = 0; i < sechalf; i++)
      {
         B[j] = A[i];
         j++;
      }

      for (int i = 0; i < n; ++i)
      {
         cout << A[i];
         if (i != n - 1)
            cout << " ";
      }
      cout << endl;

      for (int i = 0; i < n; ++i)
      {
         cout << B[i];
         if (i != n - 1)
            cout << " ";
      }
      cout << endl;
   }

   return 0;
}