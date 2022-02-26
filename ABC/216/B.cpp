#include<iostream>
#include<string>
using namespace std;

int main(){
    int N;
    string S[1009], T[1009];
    cin >> N;
    for(int i = 1; i <= N; i++){
        cin >> S[i] >> T[i];
    }
    for(int i = 1; i <= N; i++){
        for(int j = i + 1; j <= N; j++){
            if(S[i] == S[j] && T[i] == T[j]){
                    cout << "Yes" << endl;
                    return 0;
            }
        }
    }
    cout << "No" << endl;
}