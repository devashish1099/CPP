#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void build_Tree(int *tree,int *a,int index,int s,int e){
	if(s>e){
		return;
	}
	
	if(s==e){
		tree[index] = a[s];
		return;
	}

	int mid = (s+e)/2;
	build_Tree(tree,a,2*index,s,mid);
	build_Tree(tree,a,2*index+1,mid+1,e);
	int left = tree[2*index];
	int right = tree[2*index+1];
	tree[index] = min(left,right);
	return;
}

int query(int* tree ,int index ,int s ,int e ,int qs ,int qe){
	if(qe<s || qs>e){
		return INT_MAX;
	}

	if(s>=qs && e<=qe){
		return tree[index];
	}

	int mid = (s+e)/2;
	int left = query(tree,2*index,s,mid,qs,qe);
	int right = query(tree,2*index+1,mid+1,e,qs,qe);
	return min(left,right);
}

void update_node(int* tree ,int index ,int s ,int e ,int i ,int value){
	if(i<s || i>e){
		return;
	}

	if(s==e){
		tree[index] = value;
		return;
	}

	int mid = (s+e)/2;
	update_node(tree,2*index,s,mid,i,value);
	update_node(tree,2*index+1,mid+1,e,i,value);
	tree[index] = min(tree[2*index],tree[2*index+1]);
	return;
}

void updateRange(int* tree ,int index ,int  s ,int e ,int rs ,int re ,int inc){
	if(re < s || rs > e){
		return;
	}

	if(s==e){
		tree[index] += inc;
		return;
	}

	int mid = (s+e)/2;
	updateRange(tree,2*index,s,mid,rs,re,inc);
	updateRange(tree,2*index+1,mid+1,e,rs,re,inc);
	tree[index] = min(tree[2*index],tree[2*index+1]);
	return;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a[] = {1,3,4,8,6,4,5,-3,-8};
	int n = sizeof(a)/sizeof(int);

	int* tree = new int[4*n + 1];
	int index = 1;
	int s = 0;
	int e = n-1;
	build_Tree(tree,a,index,s,e);
	update_node(tree,index,s,e,8,2);
	updateRange(tree,index,s,e,6,8,1);
	int queries;
	cin>>queries;
	while (queries--){
		int qs,qe;
		cin >> qs >>qe;
		cout << query(tree,index,s,e,qs,qe)<<"\n";
	}
	return 0;
}