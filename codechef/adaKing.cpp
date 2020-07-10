#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t , k;
	cin >> t;
	while(t--){
		cin >> k;
		vector< vector<int>> chessboard(8,vector<int>(8,3));
		int  x = 0;
		for(int i = 0 ; i < 8 ; i++){
			for(int j = 0 ; j < 8 ; j++){
				chessboard[i][j] = 1;
				x++;
				if(x==k){
					break;
				}
			}
			if(x == k){
				break;
			}
		}
		// logic
		chessboard[0][0] = 2;
		for(int i = 0 ; i < 8 ; i++){
			for(int j = 0 ; j < 8 ; j++){
				if(chessboard[i][j] == 1){
					cout << ".";
				}else if(chessboard[i][j] == 2){
					cout << "O";
				}else{
					cout << "X";
				}
			}
			cout << "\n";
		}
		cout << "\n";
	}
	return 0;
}