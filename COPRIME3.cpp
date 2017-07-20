#include<iostream>
#include<stdio.h>
using namespace std;
int gcd(int a, int b)
{
 
    if (a == 0 || b == 0)
       return 0;
 

    if (a == b)
        return a;
 
   
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
int main(){
	
	int n;
	cin>>n;
	int ar1[n];
	for(int x=0;x<n;x++){
		cin>>ar1[x];
	}
	int ar[n][n];
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	ar[i][j]=0;
	
	for(int x=0;x<n;x++){
		for(int y=x+1;y<n;y++){
			ar[x][y]=gcd(ar1[x],ar1[y]);
		}
	}
/*	cout<<endl;
	for(int x=0;x<n;x++){
		for(int y=0;y<n;y++){
			cout<<ar[x][y]<<" ";
		}
		cout<<endl;
	}*/
	
	int count=0;
	for(int x=0;x<n;x++){
		for(int y=x+1;y<n;y++){
			if(ar[x][y]==1){
				count+=n-y-1;
			}
		}
	}
	cout<<count;
	return 0;
}
