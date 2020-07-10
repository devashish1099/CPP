#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m,count;
	cin >> n;
	int boys[n];
	for (int i = 0; i < n; i++){
		cin >> boys[i];
	}
	cin >> m;
	int girls[m];
	for (int i = 0; i < m; i++){
		cin >> girls[i];
	}
	count = 0;
	sort(boys,boys+n);
	sort(girls,girls+m);
	int i,j;
	i = j = 0;
	while( i < n && j < m){
		if(abs(boys[i] - girls[j]) <= 1){
			count++;
			i++;
			j++;
		}else{
			if(boys[i]-girls[j] > 1){
				j++;
			}else if(girls[j] - boys[i] > 1){
				i++;
			}
		}
	}
	cout << count << "\n";
	return 0;
}