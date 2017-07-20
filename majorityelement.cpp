#include<iostream>
#include<map>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	for(int t1=0;t1<t;t1++){
		int n;
		map<int,int>m;
		cin>>n;
		int flag=0;
		for(int x=0;x<n;x++){
		int dat;
		cin>>dat;
		map<int,int>::iterator i;
		i=m.find(dat);
		if(i==m.end())
		m.insert(pair<int,int>(dat,1));
		else{
			m[dat]++;
			if(m[dat]>(n/2)){
				cout<<dat<<endl;
				flag=1;
				x=n;
			}
		}
		
		}
		if(flag==0){
			cout<<"NO Majority Element\n";
		}
		
	}
	
	
	
	return 0;
}
