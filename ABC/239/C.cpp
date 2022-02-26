#include <iostream>
#include <vector>
using namespace std;

vector<long long> dx = {2, 1, -1, -2, -2, -1, 1, 2};
vector<long long> dy = {1, 2, 2, 1, -1, -2, -2, -1};

int main(){
    long long x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    for(int i = 0; i < 8; i++){
        long long x = x1 + dx[i];
        long long y = y1 + dy[i];

        long long dist = (x2 - x) * (x2 - x) + (y2 - y) * (y2 - y);
        if(dist == 5){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
