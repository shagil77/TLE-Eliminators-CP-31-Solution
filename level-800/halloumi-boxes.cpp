#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n, k;
    cin >> n >> k;

    vector<int> nums(n);
    bool isSorted = true;

    for (int i = 0; i < n; i++)
    {
      cin >> nums[i];
      if (i > 0 && nums[i - 1] > nums[i])
        isSorted = false;
    }

    if (isSorted)
      cout << "YES\n";
    else if (k == 1)
      cout << "NO\n";
    else if (k > 1)
      cout << "YES\n";
  }

  return 0;
}