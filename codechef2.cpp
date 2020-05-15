#include <iostream>
using namespace std;

int Solve(){
    int i,j,A,B,S,n,T,x;
    A=0;
    B=0;
    cin>>n;
    int D[n],E[n];
    cin>>S;
    S = 100 - S;
    for(j=0;j<n;j++){
        cin>>x;
        D[j]=x;
    }
    
    for(j=0;j<n;j++){
        cin>>x;
        if(x==0 && A ==0){
            A = D[j];
        }else if(x==1 && B==0){
            B = D[j];
        }
        E[j]=x;
        if(!E[j]){
            if(D[j]<A){
                A = D[j];
            }
        }else{
            if(D[j]<B){
                B = D[j];
            }
        }
    }
    if((S-A-B)>=0){
        return 1;
    }else{
        return 0;
    } 
}


int main() {
	int T,i;
    cin>>T;
    int R[T];
    i =0;
    while(i<T){
        R[i] = Solve();
        i++;
    }
    for(i=0;i<T;i++){
        if(R[i]){
            cout<<"yes\n";
        }else{
            cout<<"no\n";
        }
    }
}