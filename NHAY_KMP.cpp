#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main(){
	while(!feof(stdin)){
		
		long long  int n;
		cin>>n;
		cin.ignore();
		
		string txt,pt;
		//getline(cin,txt);
		getline(cin,pt);
		getline(cin,txt);
		long long int l=pt.length();
		vector<int> pt1(l);
		long long  i=1,j=0;
		int flag=1;
		while(flag){
		l1:	while(i<l && (pt.substr(i,1)!=pt.substr(j,1))){
				i++;
			}
			if(i==l){
				flag=0;
				break;
			}
		l:	while(pt.substr(i,1)==pt.substr(j,1)){
			
			pt1[i]=j+1;
			i++;j++;
			if(i==l){
				flag=0;
				break;
			}
			
			}
			j=pt1[j-1];
			if(j>0){
				goto l;
			}
			else{
				goto l1;
			}
			
		
		}
		/*cout<<pt<<endl;
		for(int x=0;x<l;x++){
			cout<<pt1[x];
		}*/
	
		// Initial text processing done
		i=0;j=0;
		flag=1;
		int first_time=0; long long int rcd=-1; long long int count=0;
		while(flag){
		l2:	while(txt.substr(j,1)!=pt.substr(i,1)){
				j++;
				if(j==txt.length()){
					flag=0;
					break;
				}
			}
			if(first_time==0){
			
			rcd=j;
			first_time=1;}
			while(txt.substr(j,1)==pt.substr(i,1)){
				i++;j++;
				if(i==l){
					cout<<rcd<<endl;
					count++;
					i=0;
					first_time=0;
					j=rcd+1;
					rcd=-1;
					goto  l2;
				}
				if(j==txt.length()){
					flag=0;
					break;
				}
			}
			i=pt1[i-1];
			if(i==0){
				rcd=-1;
				first_time=0;
			}
			
		}
		
			//cout<<rcd<<endl;
		
		if(count==0){
			cout<<endl;
		}
		cout<<endl;
		
		
		
		
		
		
	}
	
	
	
	
	
	
	return 0;
}
