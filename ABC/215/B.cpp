#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long long N;
    cin >> N;
    //cout << (long long)log2(N) << endl; /*Overflow*/

    if(N == 1LL){
        cout << 0 << endl;
        return 0;
    }
    int ans = 0;
    for(int i = 0; i < 100; i++){
        N /= 2LL;
        ans++;
        if(N == 1LL){
            cout << ans << endl;
            return 0;
        }
    }
}