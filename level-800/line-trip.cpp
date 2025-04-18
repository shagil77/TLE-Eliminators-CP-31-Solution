#include <bits/stdc++.h>
using namespace std;

int minFuelRequired(int x, vector<int> &station)
{
  int n = station.size();
  int minFuelReq = station[0];

  for (int i = 1; i < n; i++)
  {
    minFuelReq = max(minFuelReq, station[i] - station[i - 1]);
  }

  minFuelReq = max(minFuelReq, x - station[n - 1]);

  int lastDist = x - station[n - 1];

  if (minFuelReq - lastDist < lastDist)
    minFuelReq = 2 * lastDist;

  return minFuelReq;
}

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n, x;
    cin >> n >> x;

    vector<int> station(n);
    for (int i = 0; i < n; i++)
    {
      cin >> station[i];
    }

    cout << minFuelRequired(x, station) << "\n";
  }

  return 0;
}