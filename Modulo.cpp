#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void extendedEuclid(ll A, ll B, ll &x, ll &y, ll &D){
	if(B==0){
		D = A;
		x = 1;
		y = 0;
	}else{
		extendedEuclid(B,A%B,x,y,D);
		ll temp = x;
		x = y;
		y = temp - (A/B)*y;
	}
}

ll moduloInverse(ll C, ll M){
	ll x,y,D;
	extendedEuclid(C,M,x,y,D);
	return ( (x % M) + M) % M;
}

ll Bin_exponent(ll A, ll B, ll M){
	ll res = 1;
	while(B>0){
		if(B & 1){
			res = res * A;
			res = res % M;
		}
		A = A * A;
		A = A % M;
		B >>= 1;
	}
	return res;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll A,B,C,M,invC;
	cin >> A >> B >> C >> M;
	invC = moduloInverse(C,M);
	A = A % M;
	invC = invC % M;
	A = Bin_exponent(A,B, M);
	cout << (A * invC)%M << "\n";
	return 0;
}