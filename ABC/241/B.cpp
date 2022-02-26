#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    vector<long long> A(N), B(M);
    for(int i = 0; i < N; i++) cin >> A[i];
    for(int i = 0; i < M; i++) cin >> B[i];

    for(int i = 0; i < M; i++){
        bool flag = false;
        for(int j = 0; j < N; j++){
            if(B[i] == A[j]){
                A[j] = -1;
                flag = true;
                j = N;
            }
        }
        if(!flag){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}