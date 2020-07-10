#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll exponent(ll x,ll y, ll n){
	x = x % n;
	if (y == 0){
		return 1;
	}
	int res = exponent(x,y/2,n);
	if(y%2==0){
		return (res*res)%n;
	}else{
		return (((res*res)%n)*x)%n;
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n,k,a,b,c,d,result,mod;
	mod = 10000007;
	while(cin >> n >> k, n!=0 && k!=0){
		a = exponent(n,k,mod) % mod;
		b = exponent(n,n,mod) % mod;
		c = exponent(n-1,k,mod) % mod;
		d = exponent(n-1,n-1,mod) % mod;
		result = ((a + b)%mod + (2*((c + d)%mod))%mod)%mod;
		cout << result << "\n";
	}
	return 0;
}