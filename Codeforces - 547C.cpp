#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, sumn, suma;
	while(cin>>n){
		suma=0;
		int ans[n+1];
		int a[n];
		memset(ans, 0, sizeof(ans));
		for(int i=1;i<=n-1;i++){
			cin>>a[i];
		}
		// for(int i=0;i<n-1;i++){
		// 	suma+=(n-1-i)*a[i];
		// }
		sumn=n*(n+1)/2;
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n-1;j++){
				suma+=(n-1-i-j)*a[j];
			}
			ans[i]=(sumn-suma)/(n-i+1);
			sumn-=ans[i];
		}
		for(int i=1;i<=n;i++){
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
//a a-1 a-1+3 a-1+3-1
//a a+3 a+3-1
//a a+1 a+1+1 a+1+1+1 a+1+1+1+1
//a a+1 a+1+1 a+1+1+1