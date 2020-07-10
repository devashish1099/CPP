#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N,i;
	cin >> N;
	i = 0;
	int Col[N];
	while(i<N){
		cin >> Col[i];
		i++;
	}
	sort(Col,Col+N);
	i = 0;
	while(i<N){
		cout << Col[i] << " ";
		i++;
	}
	cout << "\n";
	return 0;
}