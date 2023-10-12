#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a = 0;
  int b = 1;
  int c;
  int n;
  cin >> n;

  if (n == 1)
  {
    cout << 1 << "\n";
  }
  else
  {
    for (int i = 2; i <= n; i++)
    {
      c = a + b;
      a = b;
      b = c;
    }

    cout << c << "\n";
  }

  return 0;
}
