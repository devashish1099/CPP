#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,T;
	cin>>n>>T;
	int count = 0;
	int task[n];
	for(int i = 0;i<n;i++){
		cin >> task[i];
		T = T - task[i];
		if(T>=0){
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}