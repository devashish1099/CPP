#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string S1 ,S2 , S3;
	int x,n,i,j,l,y;

	while(getline(cin,S1)){
		S3 = "";
		stringstream ss;
		vector<int> A;
		ss<<S1;
		ss >> l;
		if(l == 0){
			break;
		}
		while(ss >> x){
			A.push_back(x);
		}
		getline(cin,S2);
		if(l!=0){
			if(S2.length()%l == 0){
				n = S2.length()/l;
			}else{
				n = S2.length()/l + 1; 
			}
			y = 0;
			while(y < n){
				for ( i = 0; i < l; i++){
					if(y*l + A[i] -1 < S2.length()){
						S3 = S3 + S2[A[i]-1 + y*l];
					}else{
						S3 = S3 + " ";
					}
				}
				y++;
			}
		}
		cout<<"'"<<S3<<"'\n";
	}

	return 0;
}