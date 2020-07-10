#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N,i,count;
	cin >> N;
	int skill[N];
	i = 0;
	while(i<N){
		cin>> skill[i];
		i++;
	}
	sort(skill,skill+N);
	count = 0;
	for(int i = 0 ; i<N;i+=2){
		if(skill[i] != skill[i+1] ){
			count = count + skill[i+1] - skill[i];
		}
	}
	cout << count <<"\n";
	return 0;
}