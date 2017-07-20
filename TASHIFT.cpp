#include<iostream>
#include<string.h>
using namespace std;


int main(){
	
	long long int n;
	cin>>n;
	/*char st1[n];
	char st2[n];*/
	string s1,s2;
	cin>>s1>>s2;
	const char *st1=s1.c_str();
	const char *st2=s2.c_str();
	/*cin.getline(st1,n);
	cin.getline(st2,n);*/
	long int count;
	long int  idf=-1;
	long int prevcount=0;
//	cout<<st1<<" "<<strlen(st1)<<endl;
//	cout<<st2<<" "<<strlen(st2)<<endl;
	for( long int i=0;i<n;i++){
		if(st2[i]==st1[0]){
			int j=0; int id=i;
			count=0;
			//cout<<i<<endl;
			while(st1[j]==st2[id]){
				count++;
				id++;
				j++;
			}
			
			if(count>prevcount){
				idf=i;
				prevcount=count;
				count=0;
				
			}
		}
	}
	cout<<idf;
	
	return 0;
	
}
