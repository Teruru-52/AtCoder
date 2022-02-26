#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

int main(){
    long long N, K;
    long long a[1 << 18], b[1 << 18];
    map<long long, long long> Map;
    cin >> N >> K;
    for(int i = 1; i <= N; i++) cin >> a[i];
    if(K >= N){
        for(int i = 1; i <= N; i++) Map[a[i]]+= (K / N);
        K %= N;
    }
    if(K != 0){
        for(int i = 1; i <= N; i++){
          b[i] = a[i];
        }
        sort(b + 1, b + N + 1);
        for(int i = 1; i < N; i++){
          Map[b[i]]++;
          K--;
          if(K == 0) break;
        }
    }
    for(int i = 1; i <= N; i++){
        cout << Map[a[i]] << endl;
    }
}