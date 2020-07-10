#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void multiply(vector<int>&res ,int x){
    long long carry = 0;
    for(int i = 0 ; i < res.size() ; i++){
        int prod = res[i]*x + carry;
        res[i] = prod%10;
        carry = prod/10;
    }
    while(carry){
        res.push_back(carry%10);
        carry = carry/10;
    }
}

string solve(int A) {
    vector<int>res;
    res.push_back(1);
    for(int x = 2 ; x <= A ; x++){
        multiply(res,x);
    }
    string ans = "";
    for(int i = res.size()-1 ; i >= 0 ; i--){
        ans = ans + to_string(res[i]);
    }
	return ans;
}


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int i ;
	cin>>i;
	string S = solve(i);
	cout << S << "\n";
	return 0;
}