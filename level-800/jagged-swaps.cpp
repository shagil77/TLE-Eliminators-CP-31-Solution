#include <bits/stdc++.h>
using namespace std;

bool solve(vector<int> &permutation)
{
    return permutation[0] == 1;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> permutation(n);

        for (int i = 0; i < n; i++)
            cin >> permutation[i];

        if (solve(permutation))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}