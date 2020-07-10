#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n;
	cin >> n;
	ll A[n];
	for (ll i = 0; i < n; i++){
		cin >> A[i];
	}
	sort(A,A+n);
	ll div = A[0];
	bool result = true;
	for (ll i = 0; i < n; i++){
		if(A[i]%div != 0){
			result = false;
		}
	}
	if(result){
		cout << div << "\n";
	}else{
		cout << -1 << "\n";
	}
	return 0;
}