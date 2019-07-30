#include <bits/stdc++.h>
using namespace std;
int main(){
	int T, NG, NM, maxG=0, maxM=0;
	string blank;
	cin>>T;
	cin.ignore();
	for(int t=0;t<T;t++){
		getline(cin, blank);
		cin>>NG>>NM;
		for(int i=1;i<=NG;i++){
			int x;
			cin>>x;
			if(x>maxG)
				maxG=x;
		}
		for(int i=1;i<=NM;i++){
			int x;
			cin>>x;
			if(x>maxM)
				maxM=x;
		}
		if(maxM>maxG){
			cout<<"MechaGodzilla\n";
		}
		else{
			cout<<"Godzilla\n";
		}
	}
	return 0;
}