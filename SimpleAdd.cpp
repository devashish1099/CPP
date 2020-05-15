#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int atoi(char a){
	return int(a) - '0';
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a,b,c,temp;
	int x,y,carry,sum;
	getline(cin,a);
	getline(cin,b);
	c = "";
	c.resize( abs( b.size()-a.size() ),'0');
	if(a.length()>b.length()){
		b = c + b;
	}else{
		a  = c + a;
	}
	c = "";
	carry = 0;
	for(int i = a.length()-1;i>=0;i--){
		x = atoi( a[i] );
		y = atoi( b[i] );
		sum = x + y + carry;
		carry = sum/10;
		temp = to_string(sum);
		if(temp.length() == 1){
			c = temp[0] + c;
		}else{
			c = temp[1] + c;
		}
	}
	if(carry != 0){
		temp = to_string(carry);
		c = temp + c;
	}
	cout << c << "\n";
	return 0;
}