#include<iostream>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	for(int tt=0;tt<t;tt++){
		int n;
		cin>>n;
		int ar[n];
		for(int i=0;i<n;i++)
		cin>>ar[i];
		
		int len=sizeof(ar)/sizeof(ar[0]);
		//cout<<" len is "<<len<<endl;
		if(len==1){
			cout<<ar[0]<<endl;
		//cout<<" len is zero\n";
			continue;
		}
		int suml=0;
		int sumr=0;
		int l=0,r=len-1;
		int mid=len/2;
		for(int i=0;i<mid;i++){
			suml+=ar[i];
		}
		for(int i=mid+1;i<len;i++){
			sumr+=ar[i];
		}
		int grt=suml<sumr?1:0;
		
		
		bool flag=false;
		while(!flag){
			if(suml==sumr){
				cout<<ar[mid]<<endl;
				flag=true;
			}
			else{
				if(grt==1){
					suml+=ar[mid];
					mid++;
					sumr-=ar[mid];
					if(suml>sumr){
						cout<<-1<<endl;
						flag=true;
					}
				}
				else{
					
					sumr+=ar[mid];
					mid--;
					suml-=ar[mid];
					if(sumr>suml){
						cout<<-1<<endl;
						flag=true;
					}
					
				}
			}
		}
		
	}
	
	return 0;
}
