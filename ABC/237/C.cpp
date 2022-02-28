#include <iostream>
using namespace std;

int main(){
    int N;
    string S;
    cin >> S;
    N = S.size();

    int x = 0, y = 0;
    for(int i = 0; i < N; i++){
        if(S[i] == 'a') x++;
        else break;
    }
    for(int i = N - 1; i >= 0; i--){
        if(S[i] == 'a') y++;
        else break;
    }

    if(x == N){
        cout << "Yes" << endl;
        return 0;
    }
    if(x > y){
        cout << "No" << endl;
        return 0;
    }

    for(int i = x; i < N - y; i++){
        if(S[i] != S[x + (N - y) - i - 1]){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}