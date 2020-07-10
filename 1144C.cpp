#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n;
	vector<ll> B,C;
	cin >> n;
	ll A[n];
	for(ll i = 0 ; i < n ; i++){
		cin >> A[i];
	}
	sort(A,A+n);
	for(ll i = 1 ; i < n ; i++){
		if(A[i] == A[i-1]){
			B.push_back(A[i]);
		}
	}
	for(ll i = 1 ; i < B.size() ; i++){
		if(B[i] == B[i-1]){
			C.push_back(A[i]);
		}
	}
	if(C.size() != 0){
		cout << "No" << "\n";
	}else{
		cout << "Yes" << "\n" << B.size() << "\n";
		for (ll i = 0; i < B.size(); i++){
			cout << B[i] << " ";
		}
		cout << "\n" << n - B.size() << "\n";
		cout << A[n-1] << " ";
		for (ll i = n-2; i >= 0; i--){
			if(A[i] != A[i+1]){
				cout << A[i] << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}