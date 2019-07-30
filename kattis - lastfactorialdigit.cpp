#include <iostream>
using namespace std;
int main(){
	int arr[11]={1, 1, 2, 6, 4, 0, 0, 0, 0, 0, 0};
	int T, n;
	cin>>T;
	for(int t=1;t<=T;t++){
		cin>>n;
		cout<<arr[n]<<endl;
	}
	return 0;
}