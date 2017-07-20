#include<iostream>
#include<math.h>
using namespace std;
int check(int p){
	return p%2==0?1:-1;
}
int main(){
	int t;
	cin>>t;
	for(int x=0;x<t;x++){
		int p1,p2;
		cin>>p1>>p2;
		
		
		if(check(p1)+check(p2)==0){cout<<"No Number\n"; continue;}
		else{
			if(abs(p1-p2)==2 || p1==p2){
				if(p1<p2){cout<<"No Number\n"; continue;
				}
				else{
					if(check(p1)+check(p2)==2){
						
							cout<<p1+p2<<"\n"; continue;
						
					}
					else{
							cout<<p1+p2-1<<"\n"; continue;
					}
				}
			
			}
			else{
				cout<<"No Number\n"; continue;
			}
		}
		}
		return 0;
	}
	
	
	
	


