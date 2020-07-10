#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t ;
	cin >> t;
	string s;
	bool con;
	int count0,count1;
	while(t--){
		cin >> s;
		if(s.length() < 3){
			cout << 0 << "\n";
			continue;
		}
		con = true;
		for(int i = 2 ; i < s.length()-1 ; i++){
			if(s[i] != s[i-1]){
				con = false;
				break;
			}
		}
		if(con){
			if(s[0] != s[s.length()-1]){
				cout << 0 << "\n";
			}else{
				if(s[0] == s[1]){
					cout << 0 << "\n";
				}else{
					cout << 1 << "\n";
				}
			}
		}else{
			count0 = 0;
			for(int i = 1 ; i < s.length()-1 ; i++){
				if(s[i] == '0'){
					count0++;
				}
			}
			count1 = s.length() - 2 - count0;
			if(s[0] != s[s.length()-1]){
				cout <<  min(count0,count1) << "\n";
			}else{
				if(count0 < count1){
					if(s[0] == '1'){
						cout << count0 << "\n";
					}else{
						cout << count0 + 1 << "\n";
					}
				}else{
					if(s[0] == '0'){
						cout << count1 << "\n";
					}else{
						cout << count1 + 1 << "\n";
					}
				}
			}
		}	
	}
	return 0;
}