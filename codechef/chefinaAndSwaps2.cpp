#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		vector<ll> A,B;
		ll x , N , i = 0 , j = 0 , count = 0 , cost = 0 , MIN;
		bool con = true;
		cin >> N;
		for(ll m = 0 ; m < N ; m++){
			cin >> x;
			A.push_back(x);
		}
		for(ll m = 0 ; m < N ; m++){
			cin >> x;
			B.push_back(x);
		}
		sort(A.begin(),A.end());
		sort(B.begin(),B.end());
		MIN = min(A[0],B[0]);
		while(con && (i<N && j<N)){
			if(A[i] == B[j]){
				A[i] = -1;
				B[j] = -1;
				i++;
				j++;
			}else{
				count = 0;
				if(A[i] < B[j]){
					i++;
					count++;
					while(i < N && A[i] == A[i-1]){
						i++;
						count++;
					}
				}else{
					j++;
					count++;
					while(j < N && B[j] == B[j-1]){
						j++;
						count++;
					}
				}
				if(count%2 == 1){
					con = false;
				}
			}
		}
		if(con && (i < N || j < N)){
			while(con && i < N){
				count = 1;
				i++;
				while(i < N && A[i] == A[i-1]){
					i++;
					count++;
				}
				if(count%2==1){
					con = false;
				}
			}
			while(con && j < N){
				count = 1;
				j++;
				while(j < N && B[j] == B[j-1]){
					j++;
					count++;
				}
				if(count % 2==1){
					con = false;
				}
			}
		}
		if(con){
			sort(A.begin(),A.end());
			sort(B.begin(),B.end());
			i = 0;
			while(i < N && A[i] == -1){
				i++;
			}
			j = N-2;
			while(i < N){
				ll a = 2*MIN;
				ll b = min(A[i],B[j]);
				cost = cost + min(a,b);
				i += 2;
				j -= 2;
			}
			cout << cost << "\n";
		}else{
			cout << -1 << "\n";
		}
	}
	return 0;
}