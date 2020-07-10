#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n,sum;
	cin >> n;
	int A[n];
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	sort(A,A+n);
	sum = 0;
	for (int i = 0; i < n/2; i++)
	{
		sum = sum + (A[i]+A[n-1-i])*(A[i]+A[n-1-i]);
	}
	cout << sum << "\n";
	return 0;
}