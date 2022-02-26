#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, X;
    cin >> N >> X;
    vector<int> a(N), b(N);
    for (int i = 0; i < N; i++)
        cin >> a[i] >> b[i];
    vector<vector<int>> dp(N, vector<int>(11000));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 10009; j++)
        {
            dp[i][j] = -1;
        }
    }
    dp[0][0] = 0;
    for (int i = 0; i < N; i++)
    {
        if (i == 0)
        {
            dp[0][a[i]] = dp[0][0] + 1;
            dp[0][b[i]] = dp[0][0] + 1;
        }
        else
        {
            for (int j = 0; j < 10009; j++)
            {
                if (dp[i - 1][j] > 0)
                {
                    dp[i][j + a[i]] = dp[i - 1][j] + 1;
                    dp[i][j + b[i]] = dp[i - 1][j] + 1;
                }
            }
        }
    }

    if (dp[N - 1][X] == N)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}