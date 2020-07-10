#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		vector<vector<int>> A(n, vector<int>(n));
		int odd = 1;
		int even = 2;
		int k = 0;
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j <= i ; j++){
				if(i%2==0){
					A[k+j][i-j] = odd;
					odd+=2;
				}else{
					A[k+j][i-j] = even;
					even+=2;
				}
			}
		}
		k = n-1;
		for(int i = 1 ; i < n ; i++){
			for(int j = 0 ; i+j < n ; j++){
				if((i+n-1)%2 == 0){
					A[i+j][k-j] = odd;
					odd+=2;
				}else{
					A[i+j][k-j] = even;
					even+=2;
				}
			}
		}
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				cout << A[i][j] << " ";		
			}
			cout << "\n";
		}
	}
	return 0;
}