#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m, cnt;
	bool noans;
	while(cin>>n>>m){
		cnt=0;
		noans=0;
		while(m!=n){
			if((m/n)%2==0&&m%n==0){
				m/=2;
				cnt++;
			}
			else if((m/n)%3==0&&m%n==0){
				m/=3;
				cnt++;
			}
			else{
				noans=1;
				break;
			}
		}
		if(noans){
			cout<<"-1\n";
		}
		else{
			cout<<cnt<<endl;
		}
	}
	return 0;
}