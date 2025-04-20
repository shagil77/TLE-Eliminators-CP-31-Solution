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

        vector<int> bSequence(n);
        for (int i = 0; i < n; i++)
            cin >> bSequence[i];

        vector<int> aSequence;
        aSequence.push_back(bSequence[0]);

        for (int i = 1; i < n; i++)
        {
            if (bSequence[i - 1] <= bSequence[i])
                aSequence.push_back(bSequence[i]);
            else
            {
                aSequence.push_back(max(1, bSequence[i] - 1));
                aSequence.push_back(bSequence[i]);
            }
        }

        cout << aSequence.size() << "\n";
        for (auto num : aSequence)
            cout << num << " ";
        cout << "\n";
    }

    return 0;
}