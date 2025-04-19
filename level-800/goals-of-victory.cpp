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

        // g1 g2 g3 g4
        // e1: (a1+a2+a3) - (b1+c1+d1) // ab ac ad
        // e2: (b1+b2+b3) - (a1+c2+d2) // bc bd
        // e3: (c1+c2+c3) - (a2+b2+d3) // cd
        // e4: (d1+d2+d3) - (a3+b3+c3)
        // ===========================
        // e1: (a3) - (d1)
        // e2: (b3) - (d2)
        // e3: (c3) - (d3)
        // ===========================

        vector<int> efficiencies(n - 1);

        for (int i = 0; i < n - 1; i++)
            cin >> efficiencies[i];

        cout << (-accumulate(efficiencies.begin(), efficiencies.end(), 0)) << "\n";
    }

    return 0;
}