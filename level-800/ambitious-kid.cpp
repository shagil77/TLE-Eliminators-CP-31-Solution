#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int minAbsElem = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        minAbsElem = min(minAbsElem, abs(num));
    }

    cout << minAbsElem << "\n";

    return 0;
}