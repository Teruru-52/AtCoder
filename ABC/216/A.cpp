#include<iostream>
using namespace std;

int main(){
    double a;
    int X, Y;
    cin >> a;
    X = a;
    Y = (a - X) * 10;
    if(0 <= Y && Y <= 2) cout << X << "-" << endl;
    if(3 <= Y && Y <= 6) cout << X << endl;
    if(7 <= Y && Y <= 9) cout << X << "+" << endl;
}