#include <iostream>
using namespace std;

int main(){
    float A, B, C, X;
    cin >> A >> B >> C >> X;
    if (X <= A) {
        cout << 1 << endl;
        return 0;
    }
    else if (A + 1 <= X && X <= B){
        float ans;
        ans = C / (B - A);
        cout << ans << endl;
        return 0;
    }
    else if (X > C) {
        cout << 0 << endl;
        return 0;
    }
}