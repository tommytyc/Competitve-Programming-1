#include <bits/stdc++.h>
using namespace std;
int main(){
	int base[8]={1, 2, 6, 30, 210, 2310, 30030, 510510};
	int arr[8];
	int ans=0;
	for(int i=0;i<8;i++){
		cin>>arr[i];
	}
	for(int i=0;i<8;i++){
		ans+=(arr[i]*base[i]);
	}
	cout<<9699689-ans<<endl;
	return 0;
}