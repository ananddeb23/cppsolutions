#include<iostream>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	for(int t1=0;t1<t;t1++){
		int n;
		cin>>n;
		int ar1[n];
		int ar2[n];
		int ar3[n*2];
		for(int x=0;x<n;x++)
		cin>>ar1[x];
		for(int x=0;x<n;x++)
		cin>>ar2[x];
		int pt1=0,pt2=0,pt3=0;
		while(pt1<n && pt2<n){
			if(ar1[pt1]<ar2[pt2]){
				ar3[pt3++]=ar1[pt1++];
			}
			else{
				ar3[pt3++]=ar2[pt2++];
			}
		}
		while(pt1<n){
			ar3[pt3++]=ar1[pt1++];
		}
		while(pt2<n){
			ar3[pt3++]=ar2[pt2++];
		}
		
		int n1=n*2;
		cout<< ar3[n1/2 -1]+ar3[(n1/2)]<<endl;
		
	}
	
	
	
}
