#include <bits/stdc++.h>
using namespace std;

typedef struct numberandlength{
		int numnow;
		int length;
	}nl;

int main(){
	vector<nl> s;
	int test, n;
	nl tmp;
	cin>>test;
	for(int t=0;t<test;t++){				// input the number of testcase
		cin>>n;
		vector<int> seq(n);
		for(int i=0;i<n;i++){				// input the sequence
			cin>>seq[i];
		}
		for(int i=0;i<n;i++){
			if(s.empty())s.push_back({.numnow=seq[i], .length=1});	//if the stack is empty, set length = 1
			else{
				if(seq[i]<s.back().numnow)s.push_back({.numnow=seq[i], .length=1});
				else if(seq[i]>s.back().numnow){
					s.back().numnow=seq[i];
					s.back().length++;
					tmp=s.bacck();
					s.pop_back();
					while(s.size()>1&&s.back().numnow<tmp.numnow)
				}
			}
		}
		cout<<s.back().length<<endl;
	}
	return 0;
}