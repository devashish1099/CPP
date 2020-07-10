#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t,n,x;
	cin >> t;
	while(t--){
		cin >> n >> x;
		int odd = 0,even = 0;
		int A[n];
		for(int i = 0 ; i < n ; i++){
			cin >> A[i];
		}
		for(int i = 0 ; i < n ; i++){
			if(A[i]%2 == 0){
				even++;
			}else{
				odd++;
			}
		}
		if(odd == 0){
			cout << "No" << "\n";
		}else{
			if(odd%2 == 0){
				if((odd + even - 1) >= x){
					cout << "Yes" << "\n";
				}else{
					cout << "No" << "\n";
				}
			}else{
				if((odd + even) >= x){
					cout << "Yes" << "\n";
				}else{
					cout << "No" << "\n";
				}
			}
		}
	}
	return 0;
}