#include<iostream>
#include <unordered_map>

using namespace std;


int main(){
	unordered_map<int,int>s1;
	int ar[]={1,2,3,4,5,6,9,8,7,6,4,3,1,2,8,9,7};
	int l=sizeof(ar)/sizeof(ar[0]);
	for(int x=0;x<l;x++){
		int t=ar[x];
		if(s1.find(t)==s1.end()){
			s1.insert(make_pair(t,1));
		}
		else{
			s1[t]++;
		}
	}
	for(int x=0;x<l;x++){
		int t=ar[x];
		if(s1[t]==1){
			cout<<t;
			return 0;
		}
	}
	return 0;
}
