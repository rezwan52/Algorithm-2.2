#include <bits/stdc++.h>

using namespace std;

int max(int a, int b)
{
    return (a > b) ? a : b;
}

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
        }
    }

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= c; j++)
        {

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

    printf("Enter maximum capacity :");
    cin >> c;

    int w[n], v[n];

    cout << "Enter weights :";

    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }

    cout << "Enter values :";

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    knap(n, c, w, v);
    return 0;
}
