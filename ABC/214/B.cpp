#include<iostream>
using namespace std;

int main(){
    int S, T;
    cin >> S >> T;
    
    int ans = 0;
    for(int a = 0; a <= S; a++){
        for(int b = 0; b <= S - a; b++){
            for(int c = 0; c <= S - a - b; c++){
                int d = a * b * c;
                if(d <= T) ans += 1;
            }
        }
    }
    cout << ans << endl;
}