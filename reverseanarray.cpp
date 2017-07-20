#include<iostream>
#include<queue>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main(){
	int ar[]={1,2,3,4,5,6};
	int n=6;
	for(int i=0;i<6/2;i++){
		int a=ar[i];
		int b=ar[n-1-i];
		a=a^b;
		b=b^a;
		a=a^b;
		ar[i]=a;
		ar[n-i-1]=b;
	}
	for(int x=0;x<6;x++){
		cout<<ar[x]<<endl;
	}
	return 0;
}
