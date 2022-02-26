/*#include<iostream>
#include<map>
using namespace std;

int main(){
    long long N, A[1 << 18];
    long long ans = 0, sum = 0;
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> A[i];
    map<long long, int> Map;
    for (int i = 1; i <= N; i++) Map[A[i]] += 1;
    for (int i = 1; i <= 1000000000; i++){
        if (Map[i] >= 2) sum += ((Map[i] * (Map[i] - 1)) / 2);
    }
    ans = (N * (N - 1)) / 2 - sum;
    cout << ans << endl;
}*/

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    long long N, A[1 << 20];
    long long ans = 0;
    long long idx, sum = 1;
    cin >> N;
    for (long long i = 0; i < N; i++) cin >> A[i];
    sort(A, A + N);
    for (long long i = 0; i < N; i++){
        if (i > 0){
            if (idx == A[i]) sum += 1;
            if (idx != A[i]) {
                ans += (sum * (N - i));
                sum = 1;
            }
        }
        idx = A[i];
    }
    cout << ans << endl;
}