#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int x = 0 , y = 0 , count = 0;
		if(s[0] == 'x'){
			x++;
		}else{
			y++;
		}
		for(int i = 1 ; i < s.length() ; i++){
			if(s[i] == 'x'){
				if(y){
					count++;
					x = y = 0;
				}else{
					x = 1;
				}
			}else{
				if(x){
					count++;
					x=y=0;
				}else{
					y=1;
				}
			}
		}
		cout << count << "\n";
	}
	return 0;
}