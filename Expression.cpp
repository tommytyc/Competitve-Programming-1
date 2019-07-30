#include <bits/stdc++.h>
using namespace std;

struct Num{
	int each[200];
}

typedef struct Num num;

int main(){
	char c, gar='0';
	int cntnum=0, bool isnew=1;
	string theline;
	vector<string> numseqstr;
	vector<num> numseq;
	while((c=getchar())!=EOF){
		if(c!='\n'){
			if(c>='0'&&c<='9'){
				if(!isnew){
					numseqstr[cntnum].push_back(c);
				}
				else{
					isnew=0;
					numseqstr.push_back(gar);
					cntnum++;
					numseqstr[cntnum].erase(0);
					numseqstr[cntnum].push_back(c);
				}
			}
		}

	}
	return 0;
}