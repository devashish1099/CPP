#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		vector<long long> add(3,-1);
		vector<long long>  multiply(3,1e13);
		vector<long long> first(3),second(3);
		bool con = false;
		int count = 0,count2 = 0;
		for(int i = 0 ; i < 3 ; i++){
			cin >> first[i];
		}
		for(int i = 0 ; i < 3 ; i++){
			cin >> second[i];
		}
		for(int i = 0 ; i < 3 ; i++){
			add[i] = second[i] - first[i];
			if(first[i]!=0 && second[i] % first[i] == 0){
				multiply[i] = second[i]/first[i];
				if(multiply[i] == -1){
					con = true;
					count++;
				}
				if(multiply[i] < 0){
					count2++;
				}
			}
		}
		int commonAdd = 0, commonMultiply = 0 , Zeros = 0;
		for(int i = 0 ; i < 2 ; i++){
			for(int j = i+1 ; j < 3 ; j++ ){
				if(multiply[i] == multiply[j] && multiply[i]!= 1e13){
					commonMultiply++;
				}
				if(add[i] == add[j]){
					commonAdd++;
				}
			}
		}
		for(int i = 0 ; i < 3 ; i++){
			if(add[i]==0){
				Zeros++;
			}
		}
		if(con && count == 1 && count2 == 2){
			vector<long long > C;
			for(int i = 0 ; i < 3 ; i++){
				if(multiply[i] != -1){
					C.push_back(multiply[i]);
				}
			}
			if(abs(C[0]) == abs(C[1])){
				cout << "2" << "\n";
				continue;
			}
		}
		if(commonAdd >= commonMultiply && Zeros == 0){
			if(commonAdd >= 3){
				cout << "1" << "\n";
			}else if (commonAdd == 1){
				cout << "2" << "\n";
			}else{
				cout << "3" << "\n";
			}
		}else if(commonAdd < commonMultiply && Zeros == 0){
			if(commonMultiply == 3){
				cout << "1" << "\n";
			}else if (commonMultiply == 1){
				cout << "2" << "\n";
			}else{
				cout << "3" << "\n";
			}
		}else{
			if(Zeros == 3){
				cout << "0" << "\n";
			}else if(Zeros == 2){
				cout << "1" << "\n";
			}else if(Zeros == 1){
				if(commonMultiply == 1 || commonAdd == 1){
					cout << "1" << "\n";
				}else{
					cout << "2" << "\n";
				}
			}
		}
	}
	return 0;
}