#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int gcd (int a , int b){
	return b ? gcd(b,a % b) : a;
}

long lcm (int a , int b , int g ){
	return (a * b)/g;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	int a,b,g;
	long l;
	cin >> T;
	while(T-- > 0){
		cin>>a>>b;
		g = gcd(a,b);
		l = lcm(a,b,g);
		cout << g << " " << l <<"\n";
	}
	return 0;
}