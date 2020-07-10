#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t,N;
	cin >> t;
	while(t--){
		ll chef = 0 , monty = 0 , x = 0 , y = 0 ,a , b;
		cin >> N;
		for(int i = 0 ; i < N ; i++){
			x = 0 , y = 0;
			cin >> a >> b;
			while(a!=0){
				x = x + a%10;
				a = a/10;
			}
			while(b!=0){
				y = y + b%10;
				b = b/10;
			}
			if(x > y){
				chef++;
			}else if(y > x){
				monty++;
			}else{
				chef++;
				monty++;
			}
		}
		if(chef > monty){
			cout << 0 << " " << chef << "\n";
		}else if(monty > chef){
			cout << 1 << " " << monty <<"\n";
		}else{
			cout << 2 << " " << chef << "\n";
		}
	}
	return 0;
}