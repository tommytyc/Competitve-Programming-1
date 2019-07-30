#include <bits/stdc++.h>
using namespace std;
int main(){
	int N=0, M=0, cash=0;
	cin>>N;
	int tea[N+1];
	for(int i=1;i<=N;++i){
		cin>>tea[i];
	}
	cin>>M;
	int top[M+1];
	for(int i=1;i<=M;++i){
		cin>>top[i];
	}
	vector<int> combination[N+1];
	int comblen[N+1];
	int temp;
	for(int i=1;i<=N;i++){
		cin>>comblen[i];
		for(int j=0;j<comblen[i];j++){
			cin>>temp;
			combination[i].push_back(temp);
		}
	}
	int min=tea[1]+top[combination[1][0]];
	for(int i=1;i<=N;++i){
		for(int j=0;j<comblen[i];++j){
			min=(min>(tea[i]+top[combination[i][j]]))?(tea[i]+top[combination[i][j]]):min;
		}
	}
	cin>>cash;
	cash/=min;
	if(cash>0)--cash;
	cout<<cash<<endl;
	return 0;
}