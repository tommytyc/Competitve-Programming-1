#include <bits/stdc++.h>
using namespace std;
int main(){
	string theline, token;
	int time[4];
	int lh, lm, sh, sm;
	while(getline(cin, theline)){
		int cnt=0;
		istringstream delim1(theline);
		while(getline(delim1, token, ':')){
			time[cnt]=atoi(token.c_str());
			cnt++;
		}
		getline(cin, theline);
		istringstream delim2(theline);
		while(getline(delim2, token, ':')){
			time[cnt]=atoi(token.c_str());
			cnt++;
		}
		if(time[0]==time[2]&&time[1]<time[3]){
			lh=time[2]; lm=time[3];
			sh=time[0]; sm=time[1];
		}
		else if(time[0]==time[2]&&time[1]>time[3]){
			lh=time[0]; lm=time[1];
			sh=time[2]; sm=time[3];
		}
		else{
			lh=(time[0]>time[2])?time[0]:time[2];
			lm=(lh==time[0])?time[1]:time[3];
			sh=(lh==time[0])?time[2]:time[0];
			sm=(lh==time[0])?time[3]:time[1];
		}
		int totalm;
		totalm=60*(lh-sh)+(lm-sm);
		totalm/=2;
		sm+=totalm;
		if(sm>=60){
			sh+=sm/60;
			sm%=60;
		}
		if(sh<10)cout<<"0"<<sh<<":";
		else cout<<sh<<":";
		if(sm<10)cout<<"0"<<sm<<endl;
		else cout<<sm<<endl;;
	}
	return 0;
}