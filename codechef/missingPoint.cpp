#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t ;
	cin >> t;
	while(t--){
		ll N , x = 0 , y = 0 , a , b;
		cin >> N;
		N = 4*N - 1;
		for(ll i = 0 ; i < N ; i++){
			cin >> a >> b;
			x = x ^ a;
			y = y ^ b;
		}
		cout << x << " " << y << "\n";
	}
	return 0;
}