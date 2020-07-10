#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n,m,unCompsum,compSum,count,index;
	cin >> n >> m;
	ll a[n],b[n],c[n];
	for(ll i = 0 ; i < n ; i++ ){
		cin >> a[i] >> b[i];
	}
	unCompsum = 0;
	compSum = 0;
	for(ll i = 0 ; i < n ; i++ ){
		unCompsum = unCompsum + a[i];
		compSum = compSum + b[i];
		c[i] = a[i] - b[i];
	}
	if(compSum > m){
		cout << -1 << "\n";
	}else{
		sort(c,c+n);
		count = 0;
		if(unCompsum <= m){
			cout << count << "\n";
			return 0;
		}
		for (ll i = n-1; i >= 0; i--){
			unCompsum = unCompsum - c[i];
			count += 1;
			if(unCompsum <= m){
				cout << count << "\n";
				return 0;
			}
		}
	}
	return 0;
}