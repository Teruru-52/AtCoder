#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    long long N;
    long long S[1 << 18], T[1 << 18], A[1 << 18];
    //long long S[100], T[100], A[100];
    cin >> N;
    for(int i = 0; i < N; i++) cin >> S[i];
    for(int i = 0; i < N; i++){
        cin >> T[i];
        A[i] = T[i];
    }
    for(int i = 0; i < 2 * N; i++){
        if(i = 0){
            if(A[0] > A[N - 1] + S[N - 1]) A[0] = A[N - 1] + S[N - 1];
        }
        else{
            if(A[i % N] > A[i % N - 1] + S[i % N - 1]) A[i % N] = A[i % N - 1] + S[i % N - 1];
        }
    }
    for(int i = 0; i < N; i++) cout << A[i] << endl;
}