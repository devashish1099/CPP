#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q;
	ll positionX[3];
	cin >> q;
	while(q--){
		cin >> positionX[0] >> positionX[1] >> positionX[2];
		sort(positionX,positionX+3);
		if(positionX[0] == positionX[1] && positionX[1] == positionX[2]){
			cout << 0 << "\n";
		}else if (positionX[0] == positionX[1]){
			if(positionX[2] - positionX[1] > 1){
				cout << (positionX[2] - positionX[1] - 2)*2 << "\n";
			}else{
				cout << (positionX[2] - positionX[1] - 1)*2 << "\n";
			}
		}else if(positionX[2] == positionX[1]){
			if(positionX[1] - positionX[0] > 1){
				cout << (positionX[1] - positionX[0] - 2)*2 << "\n";	
			}else{
				cout << (positionX[1] - positionX[0] - 1)*2 << "\n";
			}
		}else{
			cout << (positionX[1] - positionX[0] - 1) + (positionX[2] - positionX[1] - 1) + (positionX[2] - positionX[0] - 2) << "\n";
		}
	}
	return 0;
}