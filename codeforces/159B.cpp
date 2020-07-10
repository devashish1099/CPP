#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m,tempX,tempY,Matched,Bmatched;
	map<int,vector<int>> Marker,Caps;
	map<int,vector<int>>::iterator itM,itC;
	vector<int> tempMarker,tempCap;
	cin >> n >> m;
	for (int i = 0; i < n; i++){
		cin >> tempX >> tempY;
		Marker[tempY].push_back(tempX);
	}
	for (int i = 0; i < m; i++){
		cin >> tempX >> tempY;
		Caps[tempY].push_back(tempX);
	}
	Matched = 0;
	Bmatched = 0;
	itM = Marker.begin();
	itC = Caps.begin();
	while(itM != Marker.end() && itC != Caps.end()){
		if( itM->first == itC->first){
			tempMarker = itM->second;
			tempCap = itC->second;
			sort(tempMarker.begin(),tempMarker.end());
			sort(tempCap.begin(),tempCap.end());
			Matched = Matched + min(tempCap.size(),tempMarker.size());
			int a,b;
			a = 0;
			b = 0;
			while (a<tempMarker.size() && b<tempCap.size()){
				if(tempMarker[a] == tempCap[b]){
					a++;
					b++;
					Bmatched++;
				}else if(tempMarker[a] < tempCap[b]){
					a++;
				}else{
					b++;
				}
			}
			itM++;
			itC++;
		}else if(itM->first < itC->first){
			itM++;
		}else{
			itC++;
		}
	}
	cout << Matched << " " << Bmatched << "\n";
	return 0;
}