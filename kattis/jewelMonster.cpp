#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll jewelLeft(ll x,ll a,ll n,ll c){
	x = x-1;
	x = x%c;
	a = a%c;
	ll result = x;
	n = n - 1;
	while(n--){
		result = ((result*a)%c - 1 + c)%c;
	}
	return (result*a)%c;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll x,a,n,c;
	while(cin>>x>>a>>n>>c, x!=0 && a!=0 && n!=0 && c!=0){
		cout << jewelLeft(x,a,n,c) << "\n";
	}
	return 0;
}