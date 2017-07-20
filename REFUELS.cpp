#include<iostream>
using namespace std;


long long int getans(int ar[],long wt,long round,int n){
	long int pos[n];
	long long sm=0;
	for(int i=0;i<n;i++){
		sm+=ar[i];
		pos[i]=round/(i+1)*sm+wt*((round/(i+1))-1);
		int rem=round-((round)/(i+1))*(i+1);
		pos[i]+=wt+getans(ar,wt,rem,n);
		
	}
	int id=0;
	for(int x=1;x<n;x++){
		if(pos[id]>pos[x])
		id=x;
	}
	return pos[id];
}


int main(){
	int n,q;
	cin>>n>>q;
	int ar[n];
	for(int i=0;i<n;i++)
	cin>>ar[i];
	for(int i=0;i<q;i++){
	long wt,round;
	cin>>round,wt;
	long long int ans=getans(ar,wt,round,n);
	cout<<ans;
}
return 0;
}
