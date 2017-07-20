#include<iostream>
using namespace std;



int main(){
	
	int sum=0;
	int n=8;
	for(int i=0;i<32;i++){
		unsigned int x=1<<i;
		for(int j=1;j<=n;j++){
			if(j & x){
				sum++;
			}
		}
	}
	cout<<sum;
	return 0;
}
