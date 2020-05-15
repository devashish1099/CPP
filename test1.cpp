#include<iostream>
using namespace std;

void func( int a[5]) {
	cout << sizeof( a ) / sizeof( a[0] );
}
int main(){
	int a[5] = {1,2,3,4,5};
	func(a);
}