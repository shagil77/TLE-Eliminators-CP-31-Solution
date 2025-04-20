#include <bits/stdc++.h>
using namespace std;

string solve(int a, int b, int c)
{
    if (a == b)
    {
        if (c % 2 == 0)
            return "Second";
        return "First";
    }

    if (a < b)
    {
        return "Second";
    }

    return "First";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        cout << solve(a, b, c) << "\n";
    }

    return 0;
}