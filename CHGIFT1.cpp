#include<iostream>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		int ar[n];
		for(int j=0;j<n;j++){
			cin>>ar[j];
		}
		int sm=ar[0];
		for(int j=1;j<n;j++){
			int sm1=sm+ar[j];
			int sm2=sm-ar[j];
			int sm3=sm*ar[j];
			sm=min(min(sm1,sm2),sm3);
			//cout<<sm<<endl;
		}
		cout<<sm<<endl;
	}
	
	
	return 0;
}
