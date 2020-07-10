#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int Sqrt(int A) {
    int low = 0 , high = (A/2)+1 ;
    unsigned long long x,mid;
    while(low <= high){
        mid = low + (high-low)/2; 
        x = mid * mid;
        //cout << low << " " << high << " " << mid << " " << x << "\n";
        if(x == A){
            return mid;
        }else if(x < A){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    x = low * low;
    if(x < A){
        return low;
    }else{
        return high;
    }
}



int main()
{
    //Int ABS. RANGE ~ 10 ^ 9 
    //LONG LONG ABS .RANGE ~ 10 ^ 18
   
   int a = 2147483647;
   cout << "low        " << "high        " << "mid         " << "sqr" << "\n";
   int c = Sqrt(a);
   cout << "\n" << c <<"\n";
    return 0;
}