#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

double length(double x, double y){
	return sqrt( x * x + y * y);
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	double x, y, r;
	int cases = 1;
	while( cin >> x >> y >> r ){
		double x1 = 0.0, y1 = 0.0;
		double x2 = 0.0, y2 = 0.0;

		bool in = true;	
		while(r--){
			x2 = ( x1*x1 - y1*y1 + x );
			y2 = ( 2*x1*y1 + y );

			x1 = x2;
			y1 = y2;

			if( length(x2, y2) > 2 ){
				in = false;
				break;
			}
		}
		cout << "Case " << cases << ": ";
		if(in){
			cout << "IN" << endl;
		}else{
			cout << "OUT" << endl;
		}
		cases++;
		
	}
	return 0;
}