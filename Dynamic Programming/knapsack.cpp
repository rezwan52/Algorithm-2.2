#include <bits/stdc++.h>

using namespace std;

void knap(int n, int c, int w[], int v[])
{
    int dp[n + 1][c + 1];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= c; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
            else if (w[i - 1] <= j)
            {
                dp[i][j] = max(dp[i - 1][j], v[i - 1] + dp[i - 1][j - w[i - 1]]);
            }
            else

                dp[i][j] = dp[i - 1][j];

            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Result: " << dp[n][c] << endl;
}

int main()
{
    int n, c;
    cout << "Enter item number :";
    cin >> n;

    int w[n], v[n];
    cout << "Enter weight and values :";

    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
        cin >> v[i];
    }
    printf("Enter maximum capacity :");
    cin >> c;
    knap(n, c, w, v);
    return 0;
}
