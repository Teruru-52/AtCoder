#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    int N;
    string A[1009], B[1009];
    cin >> N;
    string S1, S2[N];
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for(int i = 0; i < N; i++) {
        S1 += A[i];
        S2[i] = i + 1;
    }
    do{
        for(int i = 0; i < N; i++){
            string S3;
            S3 += S2[i];
            if(S1 == S3){
                cout << "Yes" << endl;
                return 0;
            } 
        }
    } while(next_permutation(S2.begin(), S2.end()));
    cout << "No" << endl;
}