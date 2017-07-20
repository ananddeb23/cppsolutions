#include<iostream>
using namespace std;

int main(){
	int n,fin;
	int t;
	cin>>t;
	for(int tt=0;tt<t;tt++){
	cin>>n>>fin;
	int ar[n];
	for(int i=0;i<n;i++)
	cin>>ar[i];
	
	int len=sizeof(ar)/sizeof(ar[0]);
	int l=0,r=0;
	int sum=ar[0];
	int turn=r;
	while(sum!=fin && l<=r && r<len){
		if(sum<fin){
			r++;
			sum+=ar[r];
			
		}
		else{
			sum=sum-ar[l];
			l++;
		}
		
	
		
		
	}
	if(sum==fin)
	cout<<l+1<<" "<<r+1;
	
	else{
		cout<<-1<<endl;
	}
	//cout<<sum<<endl;
}
	return 0;
}
