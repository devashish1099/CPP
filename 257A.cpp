#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m,k,count;
	cin >> n >> m >> k;
	int sockets[n];
	for (int i = 0; i < n; i++){
		cin >> sockets[i];
	}
	sort(sockets,sockets+n);
	count = 0;
	if(m <= k){
		cout << count << "\n";
		return 0;
	}
	for (int i = n-1; i >= 0; i--){
		count++;
		k = k - 1 + sockets[i];
		if(m <= k){
			cout << count << "\n";
			return 0;
		}	
	}
	cout << -1 << "\n";
	return 0;
}