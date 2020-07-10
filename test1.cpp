#include<iostream>
#include<vector>
using namespace std;

void func( int a[5]) {
	cout << sizeof( a ) / sizeof( a[0] );
}
int main(){
	vector<int>A{1,4,5,4,26,3};
	for (auto i : A)
	{
		cout << i << "\n";
	}
	
}