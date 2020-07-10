#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	vector<string> A;
	string x;
	bool correct = true;
	cin >> n;
	while(n--){
		cin>>x;
		A.push_back(x);
	}
	for(int i =0;i<A.size();i++){
		for (int j = A[i].size()-1; j >=0; j--){
			if(j==A[i].size()-1 && A[i][j] == '0'){
				correct = false;
			}
			if(A[i][j] != '0'){
				correct = true;
			}
			if(correct){
				cout<<A[i][j];
			}
		}
		cout<<"\n";
	}
	return 0;
}