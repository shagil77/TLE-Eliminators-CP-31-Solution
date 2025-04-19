#include <bits/stdc++.h>
using namespace std;

bool solve(vector<int> &arr, int k)
{
    for (auto num : arr)
        if (num == k)
            return true;

    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        if (solve(arr, k))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}