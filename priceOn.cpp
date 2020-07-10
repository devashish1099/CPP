#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t,n,k,sum = 0;
	cin >> t;
	while(t--){
		cin >> n >> k;
		int A[n];
		sum = 0;
		for(int i = 0 ; i < n ; i++){
			cin >> A[i];
		}
		for(int i = 0 ; i < n ; i++){
			if(A[i]>k){
				sum  = sum + A[i] - k;
			}
		}
		cout << sum << "\n";
	}
	return 0;
}