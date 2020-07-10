#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,k,j;
	bool result = false;
	cin >> n >> k;
	int A[n],B[k];
	for(int i =0 ;i<n;i++){
		cin >> A[i];
	}
	for(int i =0 ;i<k;i++){
		cin >> B[i];
	}
	sort(B,B+k);
	j = k;
	if(A[0] == 0){
			j--;
			A[0] = B[j];
	}
	for (int i = 1; i < n; i++)
	{
		if(A[i] == 0){
			j--;
			A[i] = B[j];
		}
		if(A[i] < A[i-1]){
			result = true;
		}
	}
	if(result){
		cout << "Yes" << "\n";
	}else{
		cout << "No" << "\n";
	}
	return 0;
}