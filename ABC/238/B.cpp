#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<bool> fl(360, false);
    fl[0] = true;
    int p = 0;
    int A;
    for(int i = 0; i < N; i++){
        cin >> A;
        p += A;
        fl[p % 360] = true;
    }
    int res = 0, cur = 0;
    for(int i = 0; i <= 360; i++){
        if(fl[i % 360]){
            res = max(res, cur);
            cur = 0;
        }
        cur++;
    }
    cout << res << endl;
}