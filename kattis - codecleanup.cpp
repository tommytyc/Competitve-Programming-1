#include <bits/stdc++.h>
using namespace std;
int main(){
	int n=0, qsize=0, cleancnt=0, tmp;
	cin>>n;
	int d[2][365+1];
	memset(d, 0, sizeof(d));
	for(int i=0;i<n;i++){
		cin>>tmp;
		d[0][tmp]=1;
	}
	for(int i=1;i<=365;i++){
		d[1][i]=d[1][i-1]+qsize;
		if(d[0][i]==1){
			qsize++;
		}
		if(d[1][i]>=20){
			qsize=0;
			d[1][i]=0;
			cleancnt++;
		}
	}
	if(d[1][365]!=0)cleancnt++;
	cout<<cleancnt<<endl;
	return 0;
}