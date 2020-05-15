#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	char c;
	string line;
	while(cin>>c){
		if(c != '<'){
			line.push_back(c);
		}else{
			line.pop_back();
		}
	}
	cout<<line<<"\n";
	return 0;
}