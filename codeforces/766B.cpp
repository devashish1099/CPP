#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n,diff;
	cin >> n;
	ll A[n];
	bool result = false;
	for (ll i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	sort(A,A+n);
	for(ll i = n-1; i>1 ; i--){
		for (ll j = 0; j < i-1; j++){
			diff = A[i]-A[j];
			if(diff < A[i-1]){
				result = true;
				break;
			}
		}
		if(result){
			break;
		}
	}
	if(result){
		cout << "Yes" << "\n";
	}else{
		cout <<"No" << "\n";
	}
	return 0;
}