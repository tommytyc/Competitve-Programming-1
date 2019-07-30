#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, maxlength, startpos, endpos, tmpstpos, tmpendpos, workflag, tmplength;
	while(cin>>n){
		maxlength=0; workflag=0;
		tmpstpos=0; tmpstpos=0; tmplength=0;
		maxlength=0; startpos=0; endpos=0;			//initialize
		int a[n+1];
		for(int i=1;i<=n;i++){						//input a[i]
			cin>>a[i];
		}
		for(int i=1;i<=n;i++){						//compute
			if(a[i]==1){
				if(workflag==0){
					tmplength=1;
					workflag=1;
					tmpstpos=i;
					tmpendpos=i;
				}
				else{
					tmplength++;
					tmpendpos=i;
				}
				if(tmplength>=maxlength){
					startpos=tmpstpos;
					endpos=tmpendpos;
					maxlength=tmplength;
				}
			}
			else{
				workflag=0;
			}
		}
		if(a[1]==1&&a[n]==1){
			tmplength=0;
			int k=1;
			while(a[k]==1){
				tmplength++;
				k++;
			}
			k=n;
			while(a[k]==1){
				tmplength++;
				k--;
			}
			maxlength = (tmplength>maxlength)?tmplength:maxlength;
		}
		cout<<maxlength<<endl;
	}
	return 0;
}