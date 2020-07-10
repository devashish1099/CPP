#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	ll ts;
	cin >> t;
	while(t--){
		cin >> ts;
		if(ts%2 == 0){
			while(ts%2 == 0){
				ts = ts / 2;
			}
			cout << ts/2 << "\n";
		}else{
			cout << ts/2 << "\n";
		}
	}
	return 0;
}