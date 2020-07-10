#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

struct Node{
	int sum,pref,suff,ans;
	bool valid;
};

Node Combine(Node l ,Node r){
	Node res ;
	if(l.valid == false ){
		return r;
	}
	if(r.valid == false){
		return l;
	}
	res.sum = l.sum + r.sum;
	res.pref = max(l.pref,l.sum + r.pref);
	res.suff = max(r.suff,r.sum+l.suff);
	res.ans = max(max(l.ans,r.ans),l.suff + r.pref);
	res.valid = true;
	return res;
}

Node Make_leaf(int val , bool valid = true){
	Node res;
	res.sum = val;
	res.suff = res.pref = res.ans = val;
	res.valid = valid;
	return res;
}

void buildSegTree(Node* tree,int* a,int index , int start ,int end){
	if(start > end){
		return;
	}
	if(start == end){
		tree[index] = Make_leaf(a[start],true);
		return;
	}
	int mid = (start+end)/2;
	buildSegTree(tree,a,2*index,start,mid);
	buildSegTree(tree,a,2*index+1,mid+1,end);
	tree[index] = Combine(tree[2*index],tree[2*index+1]);
}

Node query(Node* tree ,int index ,int s ,int e ,int qs ,int qe){
	if(qs>qe){
		return Make_leaf(0,false);
	}

	if(s==qs && e==qe){
		return tree[index];
	}

	int mid = (s+e)/2;
	return Combine(query(tree,2*index,s,mid,qs,min(qe,mid)),query(tree,2*index+1,mid+1,e,max(qs,mid+1),qe));
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	Node* tree = new Node[4*n + 1];
	int index = 1;
	int s = 0;
	int e = n-1;
	buildSegTree(tree,a,index,s,e);
	cin >> m;
	while(m--){
		int x1,y1;
		cin >> x1 >> y1;
		Node x = query(tree,index,s,e,x1-1,y1-1);
		cout << x.ans << "\n";
	}
	return 0;
}