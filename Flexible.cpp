#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int W,P;
	cin >> W >> P;
	int A[P];
	for(int i = 0; i<P ; i++){
		cin>>A[i];
	}
	vector<int> B;
	for(int i = 0;i<P;i++){
		B.push_back(A[i]);
		B.push_back(W-A[i]);
		for(int j = i+1 ;j<P;j++){
			B.push_back(abs(A[j] - A[i]));
		}
	}
	sort(B.begin(),B.end());
	int x = B[0];
	cout<<B[0]<<" ";
	for(int i = 1;i<B.size();i++){
		if(B[i] != x){
			cout<<B[i]<<" ";
			x = B[i];
		}
	}
	cout<< W <<"\n";
	return 0;
}