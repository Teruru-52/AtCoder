#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    string S;
    cin >> S;
    vector<int> A(S.size());
    for(int i = 0; i < S.size(); i++){
        A[i] = (int)S[i];
    }
    sort(A.begin(), A.end());
    for(int i = 0; i < S.size(); i++){
        cout << (char)A[i];
    }
}