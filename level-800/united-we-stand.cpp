#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> aArr(n);
        for (int i = 0; i < n; i++)
            cin >> aArr[i];

        sort(aArr.begin(), aArr.end());

        int i = 1;
        while (i < n && aArr[i - 1] == aArr[i])
        {
            i++;
        }

        if (i == n)
            cout << "-1\n";
        else
        {
            cout << i << " " << (n - i) << "\n";
            for (int j = 0; j < i; j++)
                cout << aArr[j] << " ";
            cout << "\n";
            for (int j = i; j < n; j++)
                cout << aArr[j] << " ";
            cout << "\n";
        }
    }

    return 0;
}