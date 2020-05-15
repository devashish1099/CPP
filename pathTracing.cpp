#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	vector<int> pathX,pathY;
	int x,y,xmax,xmin,ymax,ymin;
	x = y = xmax = xmin = ymax = ymin = 0;
	while(cin>>s){
		if(s == "left"){
			x -= 1;
			pathX.push_back(-1);
			pathY.push_back(0);
		}
		if(s == "right"){
			x += 1;
			pathX.push_back(1);
			pathY.push_back(0);
		}
		if(s == "up"){
			y -= 1;
			pathX.push_back(0);
			pathY.push_back(-1);
		}
		if(s == "down"){
			y += 1;
			pathX.push_back(0);
			pathY.push_back(1);
		}
		if(x>xmax){
			xmax = x;
		}
		if(x<xmin){
			xmin = x;
		}
		if(y>ymax){
			ymax = y;
		}
		if(y<ymin){
			ymin = y;
		}
	}
	int l,b;
	l = xmax + xmin*(-1) + 3;
	b = ymax + ymin*(-1) + 3;
	int map[b][l] = {0};
	for(int i=0;i<l;i++){
		map[0][i] = 2;
		map[b-1][i] = 2;
	}
	for(int i =0;i<b;i++){
		map[i][l-1] = 2;
		map[i][0] = 2;
	}
	int col = xmin*(-1) + 1;
	int row = ymin*(-1) + 1;
	int r0 = row;
	int c0 = col;
	for(int i=0;i<pathX.size();i++){
		if(i==0){
			map[row][col] = 3;
		}
		else{
			map[row][col] = 1;
		}
		col = col + pathX[i];
		row = row + pathY[i];
	}
	map[row][col] = 4;
	map[r0][c0] = 3;
	for(int i = 0;i<b;i++){
		for(int j = 0;j<l;j++){
			if(map[i][j] == 3){
				cout<<"S";
			}
			else if(map[i][j] == 4){
				cout<<"E";
			}
			else if(map[i][j] == 2){
				cout<<"#";
			}
			else if(map[i][j] == 1){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}