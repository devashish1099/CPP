#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void patternSearch(string txt , string pattern , vector<int> &lps){
	int i = 0 , j = 0 , count = 0;
	while(i < txt.size()){
		if(txt[i] != pattern[j] && j==0){
			i++;
		}else if(txt[i] == pattern[j]){
			i++;
			j++;
			if(j == pattern.size()){
				count++;
				j = lps[j-1];
			}
		}else if(txt[i] != pattern[j] && j!=0){
			j = lps[j-1];
		}
	}
	cout << count << "\n";
}

void buildLPS(vector<int> &lps , string pattern){
	lps[0] = 0;
	int len = 0 , i = 1;
	while(i < lps.size()){
		if(pattern[i] == pattern[len]){
			len++;
			lps[i] = len;
			i++;
		}else if(pattern[i] != pattern[len] && len != 0){
			len = lps[len-1];
		}else{
			lps[i] = 0;
			i++;
		}
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string txt = "AAAAACAAACAAAXAAA" , pattern = "AAAACAAAAA";
	vector<int> lps(pattern.size() , 0);
	buildLPS(lps , pattern); 
	for (int i = 0; i < lps.size(); i++){
		cout << lps[i] << " ";
	}
	cout << "\n";
	patternSearch(txt,pattern,lps);
	return 0;
}