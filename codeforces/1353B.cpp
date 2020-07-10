#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T,n,k,temp,sum,i;
	cin >> T;
	while(T--){
		cin >> n >> k;
		int A[n],B[n];
		sum = 0;
		for( i = 0; i < n; i++){
			cin >> A[i];
		}
		for( i = 0; i < n; i++){
			cin >> B[i];
		}
		sort(A,A+n);
		sort(B,B+n);
		for( i = 0; i < k; i++){
			if (B[n-1-i] > A[i]){
				temp = A[i];
				A[i] = B[n-1-i];
				B[n-1-i] = temp;
				sum = sum + A[i];
			}else{
				break;
			}
		}
		if (i < n){
			while(i<n){
				sum = sum + A[i];
				i++;
			}
		}
		cout << sum << "\n";
	}
	return 0;
}