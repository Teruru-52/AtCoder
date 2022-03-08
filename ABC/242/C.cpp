#include <iostream>
using namespace std;

#define mod 998244353
int dp[1048576][10] = {0};

int main()
{
    int N;
    cin >> N;
    for (int i = 1; i <= 9; i++)
    {
        dp[1][i] = 1;
    }

    for (int d = 2; d <= N; d++)
    {
        for (int i = 1; i <= 9; i++)
        {
            for (int j = max(1, i - 1); j <= min(9, i + 1); j++)
            {
                dp[d][j] += dp[d - 1][i];
                dp[d][j] %= mod;
            }
        }
    }
    
    int res = 0;
    for (int i = 1; i <= 9; i++)
    {
        res += dp[N][i];
        res %= mod;
    }
    cout << res << endl;
    return 0;
}