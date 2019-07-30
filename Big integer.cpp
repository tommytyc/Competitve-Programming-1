#include <bits/stdc++.h>
#define MAX 1000000000000000
using namespace std;

long long int arr[10001];

int main(){
	int cntnum, pos, strlen15;
	string theline, token, tmp;
	vector<string> num;
	while(getline(cin, theline)){
		memset(arr, 0, sizeof(arr));			//操作區歸零
		cntnum=0;
		istringstream delim(theline);
		while(getline(delim, token, ' ')){		//切割字串
			if(token!=""){
				num.push_back(token);
				cntnum++;
			}
		}
		for(int k=0;k<cntnum;k++){				//去除垃圾位數
			for(unsigned int i=0;i<num[k].size();i++){
				if(num[k][i]<='0'||num[k][i]>'9'){
					num[k].erase(i, 1);
					i--;
				}
				else if(num[k][i]>'0'&&num[k][i]<='9')break;
			}
			strlen15=num[k].size();
			for(unsigned int i=0;i<=(num[k].size()-(num[k].size()%15))/15;i++){
				if(strlen15>=15){
					arr[i]+=atoll((num[k].substr(strlen15-15, 15)).c_str());
					strlen15-=15;
					if(arr[i]>=MAX){
						arr[i+1]+=(arr[i]/MAX);
						arr[i]%=MAX;
					}
				}
				else{
					arr[i]+=atoll((num[k].substr(0, strlen15)).c_str());
					if(arr[i]>=MAX){
						int v=i;
						while(arr[v]>=MAX){
							arr[v+1]+=(arr[v]/MAX);
							arr[v]%=MAX;
							v++;
						}
					}
				}
				
			}
		}
		for(int i=10000;i>=0;i--){				//找第一個不為0的數
			if(arr[i]!=0){
				pos=i;
				break;
			}
		}
		for(int i=pos;i>=0;i--){			//輸出
			if(i!=pos){
				cout<<setw(15)<<setfill('0')<<arr[i];
			}
			else cout<<arr[i];
		}
		cout<<endl;
		
		num.clear();
	}
	return 0;
}