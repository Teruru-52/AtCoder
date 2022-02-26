#include <iostream>
using namespace std;

#define mod 998244353
#define inv2 499122177

long long triangular_number(long long x){
    x %= mod;
    long long res = x;
    res *= (x + 1);  // x(x + 1)
    res %= mod;
    res *= inv2; // x(x + 1) / 2
    res %= mod;

    return res;
}

int main(){
    long long N;
    cin >> N;

    long long res = 0;
    long long p10 = 10;
    for(int k = 1; k <= 18; k++){
        long long l = p10 / 10;  // l = 1, 10, 100, ...
        long long r = min(p10 - 1, N);
        if(l <= r){
            res += triangular_number(r - l + 1);  // x = r - l + 1, res += f(x)
            res %= mod;
            p10 *= 10;
        }
    }
    cout << res << endl;
}