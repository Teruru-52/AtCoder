#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<long long> A(N);
    for(int i = 0; i < N; i++) cin >> A[i];
    sort(A.begin(), A.end());
    A.erase(unique(A.begin(), A.end()), A.end());
    cout << A.size() << endl;
}