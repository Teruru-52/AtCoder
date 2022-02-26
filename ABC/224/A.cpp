#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string S;
    cin >> S;
    reverse(S.begin(), S.end());
    if(S[0] == 'r') cout << "er" << endl;
    if(S[0] == 't') cout << "ist" << endl;   
}