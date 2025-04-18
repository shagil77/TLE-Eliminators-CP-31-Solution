#include <bits/stdc++.h>
using namespace std;

int minActions(int n, string &cells)
{
  int prev = -1, actions = 0;
  bool flag = false;
  for (int i = 0; i < n; i++)
  {
    if (cells[i] == '#')
    {
      int m = i - prev - 1;
      if (m > 2)
      {
        flag = true;
        break;
      }
      actions += (m <= 2) ? m : 2;
      prev = i;
    }
  }

  if (flag)
    return 2;

  if (prev == n - 1)
    return actions;

  int m = n - prev - 1;
  if (m > 2)
    return 2;
  actions += (m <= 2) ? m : 2;
  return actions;
}

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    string cells;

    cin >> cells;

    cout << minActions(n, cells) << "\n";
  }

  return 0;
}