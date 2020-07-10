#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T,i;
	cin >> T;
	int A[T];
	i = 0;
	while(i < T){
		cin >> A[i];
		i++;
	}
	sort(A,A+T);
	cout << A[T/2];
	cout << "\n";
	return 0;
}