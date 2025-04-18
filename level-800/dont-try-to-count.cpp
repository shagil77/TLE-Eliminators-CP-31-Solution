#include <bits/stdc++.h>
using namespace std;

int solve(string x, string s)
{
    int n = x.length(), m = s.length();
    int count = 0;

    while (x.find(s) == string::npos && n <= 100)
    {
        x = x + x;
        n = x.length();
        count++;
    }

    if (x.find(s) != string::npos)
        return count;
    return -1;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        string x, s;

        cin >> n >> m;
        cin >> x >> s;

        cout << solve(x, s) << "\n";
    }

    return 0;
}