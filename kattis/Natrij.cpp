#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string before,after;
	cin>>before;
	cin>>after;
	int sec1,min1,hour1,sec2,min2,hour2;
	int res[3];
	hour1 = (int(before[0])-48)*10 + int(before[1])-48;
	hour2 = (int(after[0])-48)*10 + int(after[1])-48;
	min1 = (int(before[3])-48)*10 + int(before[4])-48;
	min2 = (int(after[3])-48)*10 + int(after[4])-48;
	sec1 = (int(before[6])-48)*10 + int(before[7])-48;
	sec2 = (int(after[6])-48)*10 + int(after[7])-48;
	if(sec2-sec1 > 0 ){
		res[2] = sec2 - sec1;
	}else{
		min2 = min2 - 1;
		res[2] = 60 - sec1 + sec2;
		if (min2<0){
			min2 = min2 + 60;
			hour2  = hour2 -1;
		}
	}
	if(min2 - min1> 0){
		res[1] = min2 - min1;
	}else{
		hour2 = hour2 - 1;
		res[1] = 60 - min1 + min2;
		if(hour2<0){
			hour2 = hour2 + 24;
		}
	}
	if(hour2-hour1 > 0){
		res[0] = hour2 - hour1;
	}else{
		res[0] = hour2 - hour1 + 24;
	}
	if (res[2]/60 == 1){
		res[1] = res[1] + 1;
		res[2] = res[2]%60;
	}
	if(res[1]/60 == 1){
		res[0] = res[0] +1;
		res[1] = res[1]%60;
	}
	if(res[0]/24 == 1){
		res[0] = res[0] - 24;
	}
	if(res[0] == 0 && res[1] == 0 && res[2] == 0){
		res[0] = 24;
	}
	printf("%02d:%02d:%02d\n", res[0], res[1], res[2]);
	return 0;
}