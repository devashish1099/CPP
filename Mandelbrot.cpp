#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	double x,y,zx,zy,zx1,zy1;
	double r;
	int n = 1;
	int j = 1;
	int i;
	while(cin>>x>>y>>r){
		n =1;
		zx = 0.0;zy = 0.0;
		zx1 = 0.0;zy1=0.0;
		for(i=0;i<r;i++){
			zx1 = (zx*zx - zy*zy) + x;
			zy1 = 2*zy*zx + y;

			zx = zx1;
			zy = zy1;

			if(sqrt(zx1*zx1 + zy1*zy1) > 2.000){
				n = 0;
				break;
			}
		}
		if(n==1){
			cout<<"Case "<<j<<": IN\n";
		}else{
			cout<<"Case "<<j<<": OUT\n";
		}
		j++;
	}
	return 0;
}