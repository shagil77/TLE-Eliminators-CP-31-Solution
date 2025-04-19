#include <bits/stdc++.h>
using namespace std;

int solve(vector<string> &board)
{
    int points = 0;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (board[i][j] == 'X')
            {
                for (int k = 0; k < 10; k++)
                {
                    if (
                        (i == 0 + k && (0 + k <= j || j <= 9 - k)) ||
                        (i == 9 - k && (0 + k <= j || j <= 9 - k)) ||
                        ((0 + k + 1 <= i || i <= 10 - k - 1) && j == 0 + k) ||
                        ((0 + k + 1 <= i || i <= 10 - k - 1) && j == 9 - k))
                    {
                        points += (k < 5) ? (k + 1) : (5 - (k % 5));
                        break;
                    }
                }
            }
        }
    }

    return points;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<string> board(10);

        for (int i = 0; i < 10; i++)
            cin >> board[i];

        cout << solve(board) << "\n";
    }

    return 0;
}