#include<iostream>
#include<vector>
#include<string.h>
#include<math.h>
using namespace std;
long hashpt( char pt[]){
	long l=strlen(pt);
	long hsh=0;
	for(long x=0;x<l;x++){
		hsh+=pt[x]*((long)(pow(3,x)));
		
	}
	cout<<" Hash for "<<pt<<" is "<<hsh<<endl;
	return hsh;
}
long hashfirst(char txt[],long l){
	
	long hsh=0;
	for(long x=0;x<l;x++){
		hsh+=txt[x]*((long)(pow(3,x)));
		
	}
	cout<<" Hash for first m chars "<<" is "<<hsh<<endl;
	return hsh;
}
long nwhash(char n,long l,char old,long oldhash){
	long hash=oldhash-((long)(old));
	hash/=3;
	hash+=((long)(n))*((long)(pow(3,l-1)));
	
//	cout<<" New hash  "<<" is "<<hash<<endl;
	return hash;
}
int main(){
char pt[40];
char txt[200];
cin.getline(pt,40);
cin.getline(txt,200);
long hpt=hashpt(pt);
//cout<<" im here";
long hsh=hashfirst(txt,strlen(pt));
long l1=strlen(pt);
long l=strlen(txt);
long flag=0;
//cout<<" im here";
long calchash=hsh;
if(hsh==hpt){
for(long y=0;y<l1;y++){
	if(pt[y]!=txt[y]){
		flag=1;
		break;
	}
}
if(flag==0){
	cout <<"Found at index: 0"<<endl;;
			return 0;
}	
	
}

for(long x=1;x<l-l1+1;x++){
	hsh=nwhash(txt[x+l1-1],strlen(pt),txt[x-1],calchash);
	calchash=hsh;
	cout<<" Hash for ";
	for(long j=x;j<=x+l1-1;j++){
		cout<<txt[j];
	}
	cout<<" is "<<hsh<<endl;
	if(hsh==hpt){
		flag=0;
		for(long y=0;y<l1;y++){
			if(pt[y]!=txt[x+y]){
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			cout <<"Found at index: "<<x<<endl;;
			return 0;
		}
	}
}
cout<<"Not found\n";
return 0;
}

