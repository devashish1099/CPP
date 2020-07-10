#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int LastDigit(int a,ll b){
	int res;
	a = a%10;
	res = 1;
	if(b == 0){
		return 1;
	}
	if (a==0 || a==1 || a==5 || a==6){
		b = 1;
	}else if(a==4 || a==9){
		b = b%2;
		if(b==0){
			b =2;
		}
	}else{
		b = b%4;
		if(b==0){
			b =4;
		}
	}
	while(b--){
		res = res * a;
		res = res %10;
	}
	return res;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t,a;
	ll b;
	cin>>t;
	while(t--){
		cin >> a >> b;
		cout << LastDigit(a,b) << "\n";
	}
	return 0;
}