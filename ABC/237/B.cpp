#include <iostream>
#include <vector>
using namespace std;
typedef  long long ll;

int main(){
    ll H, W;
    cin >> H >> W;
    vector<vector<ll>> A(H, vector<ll>(W)), B(W, vector<ll>(H));
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            cin >> A[i][j];
        }
    }
    for(int i = 0; i < W; i++){
        for(int j = 0; j < H; j++){
            B[i][j] = A[j][i];
        }
    }
    for(int i = 0; i < W; i++){
        for(int j = 0; j < H; j++){
            cout << B[i][j];
            if(j < H - 1) cout << " ";
            else cout << endl;
        }
    }
}