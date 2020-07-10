#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
    int t,N;
    cin >> t;
    while(t--){
        int i = 0 , prev , next , x;
        int sum = 0;
        cin >> N;
        if(i == 0){
            cin >> prev;
        }
        for(int j = 0 ; j < N-1 ; j++){
            cin >> next;
            x = (abs(next-prev) - 1);
            if(x > 0){
                sum = sum + x;
            }
            prev = next;
        }
        cout << sum << "\n";
    }
}