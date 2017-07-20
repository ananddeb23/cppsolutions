#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
string getindex(int n,int s){
	string str="";
	int n1=n;
	//cout<<"im ghere\n";
while(n>=1){
	if(n%2==0){
		str="0"+str;
	}
	else{
		str="1"+str;
	}
	n=n/2;
}

while(str.length()<s){
	str="0"+str;
}
//cout<<" Decinal to binary for "<<n1<<" is "<<str<<endl;
return str;	

}
void dojob(vector<char>v){
	int s=v.size();
	cout<<"[";
	for(int x=0;x<(2<<(s-1));x++){
		string s1=getindex(x,s);
		cout<<"(";
		for(int j=0;j<s;j++){
			if(s1.substr(j,1)=="1"){
				cout<<v[j]<<",";
			}
		}
		cout<<"), ";
	}
	cout<<"]\n";
}
 int main(){
 	
 	int n;
 	cin>>n;
 	vector<char>v;
 	while(n--){
 		char c,dl;
 		cin>>c;
 		v.push_back(c);
 		
 		
 	}
 	dojob(v);
 	
 	return 0;
 }
