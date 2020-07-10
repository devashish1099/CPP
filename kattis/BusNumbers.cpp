#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T,x;
	cin>>T;
	int buses[T + 1];
	for(int i = 0; i<T ; i++){
		cin>>buses[i];
	}
	sort(buses,buses+T);
	buses[T] = -1;
	x = 1;
	for(int i = 0; i<T ; i++){
		if(buses[i] + 1 == buses[i+1]){
			x++;
		}else{
			if(x>2){
				cout<<buses[i-x+1]<<"-"<<buses[i]<<" ";
			}else if (x == 2){
				cout<<buses[i-1]<<" "<<buses[i]<<" ";
			}else{
				cout<<buses[i]<<" ";
			}
			x = 1;
		}
	}
	return 0;
}