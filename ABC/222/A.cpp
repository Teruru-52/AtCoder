#include<iostream>
using namespace std;

int main(){
    int N, ans[4];
    cin >> N;
    for(int i = 0; i < 4 ; i++){
        ans[i] = N % 10;
        N /= 10;
    }
    for(int i = 3; i >= 0; i--) cout << ans[i];
}