#include<iostream>
#include<string>
using namespace std;

int main(){
    long long N, a;
    cin >> N;
    a = N;
    string S = "";
    while(1){
        if(N % 2 == 0){
            N /= 2;
            S = 'B' + S;
        }
        else{
            N -= 1;
            S = 'A' + S;
        }
        if(S.size() >= 120){

        }
        if(N == 1){
            S = 'A' + S;
            cout << S << endl;
            return 0;
        }
    }
}