#include <bits/stdc++.h>
using namespace std;
int main(){
	long long int n, l, ap, bp;
	cin>>n;
	for(long long int nc=0;nc<n;nc++){
		cin>>l>>ap>>bp;
		if(l==1){
			cout<<ap<<endl;
			continue;
		}
		if(ap*2<bp){
			cout<<ap*l<<endl;
		}
		else if(ap*2>bp){
			if(l%2==0){
				cout<<bp*l/2<<endl;
			}
			else cout<<bp*(l-1)/2 + ap<<endl;
		}
		else cout<<ap*l<<endl;
	}
	return 0;
}