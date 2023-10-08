#include <bits/stdc++.h>

using namespace std;

double areaSwitchCase(int ch, vector<double> a)
{
  switch (ch)
  {
  case 1:
    return M_PI * a[0] * a[0];
    break;

  case 2:
    return a[0] * a[1];
  default:
    cout << "Incorrect choice "
         << "\n";
    break;
  }
}

int main()
{

  int choice;
  cout << "Enter your choice : ";
  cin >> choice;
  vector<double> arr(choice);
  for (auto x : arr)
  {
    cin >> x;
  }
  double answer = areaSwitchCase(choice, arr);
  cout << answer << "\n";
  return 0;
}