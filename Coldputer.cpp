#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	int count = 0;
	cin>>T;
	int Temp[T];
	for (int i = 0; i < T; i++)
	{
		cin>>Temp[i];
		if(Temp[i]<0){
			count++;
		}
	}
	cout<<count<<endl;

	return 0;
}