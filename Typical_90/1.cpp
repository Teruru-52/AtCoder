#include <iostream>
using namespace std;

long long N, L, K;
long long A[100009];

bool judge(long long M){
    long long cnt = 0;
    long long pre = 0;
    for(int i = 0; i < N; i++){
        if(A[i] - pre >= M && L - A[i] >= M){
            cnt++;
            pre = A[i];
        }
    }
    if(cnt >= K) return true;
    else return false;
}

int main(){
    cin >> N >> L >> K;
    for(int i = 0; i < N; i++) cin >> A[i];

    long long left = -1;
    long long right = L + 1;
    while (right - left > 1)
    {
        long long mid = left + (right - left) / 2;
        if (judge(mid) == true)
            left = mid;
        else
            right = mid;
    }
    cout << left << endl;
}