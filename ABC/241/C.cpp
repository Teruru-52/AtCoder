#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<string> S(N);
    for (int i = 0; i < N; i++)
        cin >> S[i];

    // 縦
    for (int j = 0; j < N; j++)
    {
        for (int i = 0; i < N - 5; i++)
        {
            int cnt = 0;
            for (int k = 0; k < 6; k++)
            {
                if (S[i + k][j] == '#')
                    cnt++;
            }
            if (cnt >= 4)
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    // 横
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - 5; j++)
        {
            int cnt = 0;
            for (int k = 0; k < 6; k++)
            {
                if (S[i][j + k] == '#')
                    cnt++;
            }
            if (cnt >= 4)
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    // ななめ（左上右下）
    for (int i = 0; i < N - 5; i++)
    {
        for (int j = 0; j < N - 5; j++)
        {
            int cnt = 0;
            for (int k = 0; k < 6; k++)
            {
                if (S[i + k][j + k] == '#')
                    cnt++;
            }
            if (cnt >= 4)
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    // ななめ（左下右上）
    for (int i = N - 1; i >= 5; i--)
    {
        for (int j = 0; j < N - 5; j++)
        {
            int cnt = 0;
            for (int k = 0; k < 6; k++)
            {
                if (S[i - k][j + k] == '#')
                    cnt++;
            }
            if (cnt >= 4)
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
}