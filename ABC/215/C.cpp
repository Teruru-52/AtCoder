#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string S;
    int K;
    int A[10];
    cin >> S >> K;
    for(int i = 0; i < S.size(); i++){
        A[i] = (int)(S[i]);
    }
    sort(A, A + S.size());
    S[K - 1] = (char)(A[K - 1])
    cout << "(char)(S[A[K " << endl;
}