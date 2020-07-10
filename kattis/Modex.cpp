#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int Modulo(int x,ll y, int n){
	x = x % n;
	if (y == 0){
		return 1;
	}
	int res = Modulo(x,y/2,n);
	if(y%2==0){
		return (res*res)%n;
	}else{
		return (((res*res)%n)*x)%n;
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T,x,n;
	ll y;
	cin >> T;
	while(T--){
		cin>>x>>y>>n;
		cout<<Modulo(x,y,n)<<"\n";
	}
	cin >> T;
	cout<<"\n";
	return 0;
}