#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll binary_exponent(int n,int a){
	if (a == 0){
		return 1;
	}
	ll res = binary_exponent(n,a/2);
	if(a%2 == 0){
		return res * res;
	}else{
		return res * res * n;
	}
	
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,parking_spaces;
	cin >> n;
	ll result;
	parking_spaces = 2*n - 2;
	if(parking_spaces < 2){
		cout << 0 << "\n";
	}else if(parking_spaces == 2){
		cout << 4 << "\n";
	}else{
		result = 3*binary_exponent(4,n-2)*2 + 3*3*binary_exponent(4,n-3)*(parking_spaces-n-1);
		cout << result << "\n"; 
	}
	return 0;
}