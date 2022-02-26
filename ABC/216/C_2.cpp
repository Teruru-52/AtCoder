#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

vector<long long> prime_factors(long long N){
	long long rem = N;
	vector<long long> p;
	for(long long i = 2; i * i <= N; i++){
		while(rem % i == 0){
			p.push_back(i);
			rem /= i;
		}
	}
	if(rem != 1LL) p.push_back(rem);
	return p;
}
int main(){
    long long N;
    cin >> N;
    string S = "";
    vector<long long> vec = prime_factors(N);
    sort(vec.begin(), vec.end(), greater<int>());
    for(int i = 0; i < vec.size(); i++){
        if(vec[i] == 2) S = S + 'B';
        else{
            while(1){
        if(vec[i] % 2 == 0){
            vec[i] /= 2;
            S = 'B' + S;
        }
        else{
            vec[i] -= 1;
            S = 'A' + S;
        }
        if(vec[i] == 1){
            S = 'A' + S;
            break;
        }
        }
    }
    }
    cout << S << endl;
}