#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int P, A[11], ans = 0;
    cin >> P;
    if(P == 1) ans = 1;
    else {
        A[1] = 1;
        for(int i = 2; i <= 10; i++){
           A[i] = A[i - 1] * i;
        }
        int pos = lower_bound(A + 1, A + 10 + 1, P) - A;
        for(int i = pos - 1; i >= 1; i--){
          int m = P / A[i];
          P %= A[i];
         ans += m;
         if(P == 0) break;
        }
    }
    cout << ans << endl;
}