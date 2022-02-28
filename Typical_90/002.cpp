#include <iostream>
using namespace std;

bool judge(string T){
    int sum = 0;
    for(int i = 0; i < T.size(); i++){
        if(T[i] == '(') sum++;
        else sum--;
        if(sum < 0) return false;
    }
    if(sum == 0) return true;
    else return false;
}

int main(){
    int N;
    cin >> N;

    for(int i = 0; i < (1 << N); i++){
        string S = "";
        for(int j = N - 1; j >= 0; j--){
            if((i & (1 << j)) == 0) S += "(";
            else S += ")";
        }
        if(judge(S) == true) cout << S << endl;
    }
}