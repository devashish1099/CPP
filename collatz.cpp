#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long a,b,b0;
	long counta ,countb;

	while(cin>>a>>b){
		if( a == 0 && a == b){
			break;
		}
		b0 = b;
		counta = countb = 0;
		vector<int> A;
		while(a!=1){
			A.push_back(a);
			if(a%2==0){
				a = a/2;
			}else{
				a = 3*a + 1;
			}
			counta++;
		}
		A.push_back(a);
		counta++;
		vector<int>::iterator same;
		while(b!=1){
			same = find(A.begin(),A.end(),b);
			if(same != A.end()){
				break;
			}
			if(b%2==0){
				b=b/2;
			}else{
				b = 3*b + 1;
			}
			countb++;
		}
		if(b==1){
			same = A.end() - 1;
		}
		counta = same - A.begin();
		cout<<A[0]<<" needs "<<counta<<" steps, "<< b0 <<" needs "<<countb<<" steps, they meet at "<<*same<<"\n";
	}
	return 0;
}