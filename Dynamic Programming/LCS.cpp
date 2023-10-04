#include <bits/stdc++.h>
using namespace std;
int lcs(string s1, string s2)

{
    int l1, l2;
    l1 = s1.size();
    l2 = s2.size();

    int dp[l1 + 1][l2 + 1];

    for (int i = 0; i <= l1; i++)
    {
        for (int j = 0; j <= l2; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }

            else if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else

                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Result: ";
    return dp[l1][l2];
}

int main()
{
    string s1, s2;
    cout << "Enter first Sequence: " << endl;
    cin >> s1;
    cout << "Enter Second Sequence: " << endl;
    cin >> s2;
    cout << lcs(s1, s2);

    return 0;
}
