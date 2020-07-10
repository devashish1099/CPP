#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T,n,Noofgranies,i;
	cin >> T;
	while(T--){
		cin >> n;
		Noofgranies = 1;
		int GraniesReq[n];
		for (int i = 0; i < n; i++){
			cin >> GraniesReq[i];
		}
		sort(GraniesReq,GraniesReq+n);
		for(i = n-1 ; i >= 0; i--){
			if(GraniesReq[i] <= i+1){
				break;
			}
		}
		cout << i + 2<<"\n";
	}
	return 0;
}