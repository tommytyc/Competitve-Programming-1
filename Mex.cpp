#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int T, minflag;
	long long int n, l, r, min;
	cin>>T;
	for(int t=0;t<T;t++){
		minflag=0;
		cin>>n>>l>>r;
		long long int a[n];
		long long int u[n+1][2];
		if(n==0){
			cin.ignore();
			getline(cin, s);
			cout<<l<<endl;
			continue;
		}
		else{
			for(long long int i=0;i<n;i++){
				cin>>a[i];
				u[i][0]=l+i;
				u[i][1]=0;
			}
			u[n][0]=l+n;
			u[n][1]=0;
		}
		
		for(int i=0;i<n;i++){
			if(a[i]>=l&&a[i]<=l+n){
				u[a[i]-l][1]=1;
			}
		}
		for(int i=0;i<=n;i++){
			if(u[i][1]==0){
				min=u[i][0];
				minflag=1;
				break;
			}
		}
		if(minflag==1&&min<=r){
			cout<<min<<endl;
		}
		else{
			cout<<"^v^\n";
		}
	}
	return 0;
}