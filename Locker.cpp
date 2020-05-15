#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll MaxMoney (ll a, ll b , ll c){
	ll res = 1;
	a = a % (1000000007);
	while (b>0){
		if(b & 1){
			res = res * a;
			res = res % (1000000007);
		}
		a = a * a;
		a = a % (1000000007);
		b >>= 1;
	}
	return (res*c)%(1000000007);
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	ll n,x,c;
	while(T--){
		c = 1;
		cin >> n;
		if(n%3 == 0){
			x = n/3;
		}else if(n%3 > 1){
			x = n/3;
			c = n - x*3;
		}else{
			x = n/3 - 1;
			c = n - x*3;
		}
		if(n == 1){
			cout << 1<< "\n";
			continue;
		}
		cout << MaxMoney(3,x,c)<< "\n";
	}
	return 0;
}