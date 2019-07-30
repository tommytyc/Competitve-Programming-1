#include <bits/stdc++.h>
using namespace std;

int deck[14][14]; 

void card(){
	queue<int> q;
	for(int t=1;t<=13;t++){
		for(int i=1;i<=t;i++){
			q.push(i);
		}
		for(int i=1;i<=t;i++){		//find the position of each number 1 ~ t
			for(int j=1;j<=i;j++){
				q.push(q.front());
				q.pop();
			}
			deck[t][i]=q.front();
			q.pop();
		}
	}
}

int main(){
	int T=0, n=0;
	card();
	cin>>T;
	for(int t=0;t<T;t++){
		cin>>n;
		int num[n+1];
		for(int i=1;i<=n;i++){
			num[deck[n][i]]=i;
		}
		for(int i=1;i<=n;i++){
			if(i!=n)cout<<num[i]<<" ";
			else cout<<num[i]<<endl;
		}
	}
	return 0;
}