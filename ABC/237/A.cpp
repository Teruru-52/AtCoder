#include <iostream>
using namespace std;

int main(){
    long long N;
    cin >> N;

    long long M = (long long)1 << 31;
    if(-M <= N && N < M) cout << "Yes" << endl;
    else cout << "No" << endl;
}