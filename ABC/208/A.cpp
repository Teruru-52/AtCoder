#include<iostream>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;
    if(B <= A * 6 && B >= A) cout << "Yes" << endl;
    else cout << "No" << endl;
}