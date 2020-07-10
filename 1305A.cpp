#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T,n;
	cin >> T;
	while(T--){
		cin >> n;
		int A[n],B[n];
		for (int i = 0; i < n; i++)
		{
			cin >> A[i];
		}
		for (int i = 0; i < n; i++)
		{
			cin >> B[i];
		}
		sort(A,A+n);
		sort(B,B+n);
		for (int i = 0; i < n; i++)
		{
			cout << A[i]<<" ";
		}
		cout << "\n";
		for (int i = 0; i < n; i++)
		{
			cout << B[i] << " ";
		}
		cout << "\n";
	}
	return 0;
}