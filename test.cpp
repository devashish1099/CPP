#include <bits/stdc++.h>

using namespace std;

auto solve(vector<int> &A, vector<int> &B){
    const long long c = 1e9 + 7;
    unordered_map<long long,long long> freq;
    stack<long long> S;
    vector<long long> freqCounter(A.size(),0);
    vector<pair <long long , long long>> G;
    vector<int> res;
    // S.push(0);
    // for(long long i = 1 ; i < A.size() ; i++){
    //     if(A[S.top()]>A[i]){
    //         S.push(i);
    //     }else{
    //         while(!S.empty() && A[S.top()]<A[i]){
    //             freqCounter[S.top()] = i - S.top();
    //             S.pop();
    //         }
    //         S.push(i);
    //     }
    // }
    // while(!S.empty()){
    //     freqCounter[S.top()] = A.size() - S.top();
    //     S.pop();
    // }
    
    // S.push(A.size()-1);
    // for(long long i = A.size()-2 ; i >= 0 ; i--){
    //     if(A[S.top()]>A[i]){
    //         S.push(i);
    //     }else{
    //         while(!S.empty() && A[S.top()]<A[i]){
    //             freqCounter[S.top()] = freqCounter[S.top()] * (S.top()-i);
    //             S.pop();
    //         }
    //         S.push(i);
    //     }
    // }

    // while(!S.empty()){
    //     freqCounter[S.top()] = freqCounter[S.top()] * (S.top()+1);
    //     S.pop();
    // }
    // for (int i = 0; i < freqCounter.size(); i++){
    //     freq[A[i]] += freqCounter[i];
    // }
    
    
    //return freq;
    for(auto i = freq.begin(); i != freq.end() ; i++){
        long long j = 2;
        long long prodOf = i->first % c ;
        for(j = 2; j * j < i->first; j++){
            if(i->first % j == 0){
                prodOf = ((prodOf)*(i->first%c))%c;
            }
        }
            
        if(j*j == i->first){
            prodOf = (prodOf * (j%c))%c;
        }
        
        pair <long long,long long> T(prodOf,i->second);
        G.push_back(T);
        //cout << T.first << "->" << i->first << "\n";
    }
    sort(G.rbegin(),G.rend());
    vector<long long> final(G.size(),0);
    final[0] = G[0].second;
    for(auto i = 1; i < G.size(); i++){
        final[i] = final[i-1] + G[i].second;
    }
    int m;
    for(int i = 0 ; i < B.size() ; i++){
        m = lower_bound(final.begin(),final.end(),B[i]) - final.begin();
        B[i] = G[m].first;
    }
    return B;
}


int main(){
    vector<int> A = { 1,2,4};
    vector<int> B = {1,2,3,4,5,6};
    auto mat = solve(A,B);
    for(auto i = 0; i < mat.size() ; i++){
        cout << mat[i] << "\n";
    }
    return 0;
}