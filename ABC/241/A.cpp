#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> a(10);
    for(int i = 0; i < 10; i++) cin >> a[i];
    int k = 0;
    for(int i = 0; i < 3; i++){
        k = a[k];
    }
    cout << k << endl;
}