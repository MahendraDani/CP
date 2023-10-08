#include <bits/stdc++.h>
using namespace std;

int main()
{
  char c;
  cin >> c;
  int ascciValue = (int)c;

  if (ascciValue >= 65 && ascciValue < 97)
  {
    cout << 1 << "\n";
  }
  else if (ascciValue >= 97 && ascciValue < 122)
  {
    cout << 0 << "\n";
  }
  else
  {
    cout << -1 << "\n";
  }
}