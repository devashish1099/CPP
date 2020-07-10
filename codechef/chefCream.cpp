#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t,n;
	bool can = true;
	cin >> t;
	while(t--){
		cin >> n;
		vector<int> A(n);
		can = true;
		for(int i = 0 ; i < n ; i++){
			cin >> A[i];
		}
		int five = 0, ten = 0;
		for(int i = 0 ; i < n ; i++){
			if(A[i] == 5){
				five++;
			}else if(A[i] == 10){
				if(five == 0){
					can = false;
					break;
				}
				five--;
				ten++;
			}else{
				if(ten > 0){
					ten--;
				}else if(five > 1){
					five -= 2;
				}else{
					can = false;
					break;
				}
			}
		}
		if(can){
			cout << "YES" << "\n";
		}else{
			cout << "NO" << "\n";
		}
	}
	return 0;
}