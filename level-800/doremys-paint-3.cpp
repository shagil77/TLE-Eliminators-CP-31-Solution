#include <bits/stdc++.h>
using namespace std;

bool solve(vector<int> &arr)
{
    int n = arr.size();
    int num1 = -1, freq1 = 0, num2 = -1, freq2 = 0;

    for (auto num : arr)
    {
        if (num == num1)
            freq1++;
        else if (num == num2)
            freq2++;
        else
        {
            if (num1 != -1 && num2 != -1)
                return false;

            if (num1 == -1)
                num1 = num, freq1 = 1;
            else
                num2 = num, freq2 = 1;
        }
    }

    if (num1 == -1 || num2 == -1)
        return true;

    if (n % 2 == 0)
        return freq1 == freq2;
    return abs(freq1 - freq2) == 1;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        if (solve(arr))
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}