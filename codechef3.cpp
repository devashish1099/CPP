#include <iostream>
using namespace std;

void covid(int n, int *people){
    int diff[n-1];
    int max = 0;
    int min = n;
    int count =0;
    for(int i =1;i<n;i++){
        diff[i-1] = people[i] - people[i-1];
        if(diff[i-1]<3){
            count++;
        }else{
            if(count>max){
                max = count;
            }
            if(count<min){
                min = count;
            }
            count = 0;
        }
    }
    if(count>max){
        max = count;
    }
    if(count<min){
        min = count;
    }
    cout<<(min+1)<<" "<<(max+1)<<"\n";
}

int main() {
	int T;
	cin>>T;
    int i;
	while(T--){
	    int n;
	    cin>>n;
	    int people[n];
	    for(i =0;i<n;i++){
	        cin>>people[i];
	    }
	    covid(n,people);
	}
	return 0;
}
