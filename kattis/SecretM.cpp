#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N,L,k,x;
	float v;
	cin>>N;
	while(N-- > 0){
		string S;
		cin >> S;
		L = S.length();
		k = int(sqrt(L));
		v = sqrt(L);
		if(v>k){
			k = k+1;
		}
		x = (k*k - L)%k;
		string M = "";
		for(int i = k; i > 0; i--){
			for(int j = 0; j < L; j+=k){
				if(i>x){
					M = M + S[L+x-i-j];
				}else{
					M = M + S[L+x-i-j-k];
				}
			}
		}
		cout<<M<<"\n";
	}

	return 0;
}