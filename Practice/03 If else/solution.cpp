#include <bits/stdc++.h>

using namespace std;

string compareIfElse(int a, int b)
{
  if (a > b)
  {
    return "greater";
  }
  else if (a == b)
  {
    return "equal";
  }
  else
  {
    return "smaller";
  }
}

int main()
{
  int a, b;
  cout << "Enter the value of a: ";
  cin >> a;
  cout << "\n";
  cout << "Enter the value of b: ";
  cin >> b;
  cout << "\n";
  string answer = compareIfElse(a, b);
  cout << answer << '\n';
  return 0;
}