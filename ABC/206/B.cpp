#include<iostream>
using namespace std;

int main(){
    long long N;
    long long sum = 0;
    cin >> N;
    for (int i = 1; i <= N; i++){
        sum += i;
        if (sum >= N) {
            cout << i << endl;
            return 0;
        }
    }  
}