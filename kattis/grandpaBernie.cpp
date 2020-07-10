#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	unordered_map<string,vector<int>> travelHistory;
	unordered_map<string,vector<int>>::iterator it; 
	int n,q,year,t;
	string s;
	cin >> n;
	while(n--){
		vector<int> temp;
		cin >> s;
		cin >> year;
		travelHistory[s].push_back(year);
	}
	it = travelHistory.begin();
	while(it != travelHistory.end()){
		if(it->second.size() > 1){
			sort(it->second.begin(),it->second.end());
		}
		it++;
	}
	cin >> q;
	while(q--){
		vector<int> temp;
		cin >> s;
		cin >> t;
		cout << travelHistory[s][t-1] <<"\n";
	}
	return 0;
}