#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T,i,j,N,count,diff,x,m,total,k;
	count = 0;
	cin>>T;
	vector<int> tot;
	for(i =0 ; i<T ; i++){
	    cin>> N;
	     vector<vector <int>> B;
	        vector <int> C,A;
	    for(j=0;j<N;j++){
	        cin>>m;
	        A.push_back(m);
	        if(A[j]%2!=0){
	            count++;
	        }
	        else if(A[j]%4 == 0){
	            if(C.empty()){
	                count = 0;
	            }else{
	                C.push_back(count);
	                B.push_back(C);
	                C.clear();
	            }
	        }
	        else if(A[j]%2 == 0){
	            if(C.empty()){
	                C.push_back(count);
	                count = 0;
	            }else{
	                C.push_back(count);
	                B.push_back(C);
	                C.clear();
	                C.push_back(count);
	                count = 0;
	            }
	        }
	    }
        if(!C.empty()){
            C.push_back(count);
            B.push_back(C);
            C.clear();
            count =0;
        }
	    diff = 0;
        count = 0;
	    
	    for(j=0;j<B.size();j++){
	        x = B[j][1]+B[j][0]+1 + B[j][0]*B[j][1];
	        diff = diff + x;
	    }
	    
	    total = (N*(N+1)/2) - diff;
		tot.push_back(total);
	}

	for ( k = 0; k < T; k++)
	{
		cout<< tot[k] <<endl;
	}
	return 0;
}
