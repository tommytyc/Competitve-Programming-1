#include <bits/stdc++.h>
using namespace std;
int main(){
	int sum=0;
	int arr[9];
	for(int i=0;i<9;++i){
		cin>>arr[i];
		sum+=arr[i];
	}
	sum-=100;
	for(int i=0;i<8;++i){
		for(int j=i+1;j<9;++j){
			if(arr[i]+arr[j]==sum){
				arr[i]=arr[j]=-1e9;
				break;
			}
		}
	}
	for(int i=0;i<9;++i){
		if(arr[i]==-1e9)continue;
		cout<<arr[i]<<endl;
	}
	return 0;
}