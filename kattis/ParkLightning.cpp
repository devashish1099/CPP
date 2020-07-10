#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T,a,b;
	cin >> T;
	while(T--){
		cin >> a >> b;
		if(a%2 == 0 || b%2 == 0){
			cout << (a*b)/2 << "\n";
		}else{
			cout << ((a*b)/2) +1 << "\n";
		}
	}
	return 0;
}