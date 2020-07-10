#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,hash,collisions,unique,collision_local;
	unordered_map<int,vector<int>>::iterator it;
	string s;
	while( cin>>n , n!= 0 ){
		cin.ignore();
		unordered_map<int,vector<int>> hashTable;
		vector<string> files;
		collisions = 0;
		unique  = 0;
		for(int i = 0 ; i < n ; i++ ){
			getline(cin,s);
			files.push_back(s);
		}
		for(int i = 0 ; i < n ; i++ ){
			hash = files[i][0];
			for(int j = 1; j < files[i].length() ; j++){
				hash = hash ^ int(files[i][j]);
			}
			hashTable[hash].push_back(i);
		}
		it = hashTable.begin();
		while(it != hashTable.end()){
			collision_local =0 ;
			if(it->second.size() == 1){
				unique++;
			}else{
				int arr[it->second.size()];
				memset(arr,-1,sizeof(arr));
				for(int i = 0;i < it->second.size();i++){
					for(int j = i+1 ; j < it->second.size();j++){
						if(files[it->second[i]] == files[it->second[j]]){
							arr[j] = 0;
							collision_local++;
						}
					}
					unique = unique + (-1)*arr[i];
				}
			}
			collisions = collisions + it->second.size()*(it->second.size()-1)/2 - collision_local;
			it++;
		}
		cout << unique << " " << collisions << "\n";
	}
	return 0;
}