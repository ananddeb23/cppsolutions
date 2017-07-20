#include<iostream>
#include<algorithm>
using namespace std;
void backend(string pre,string s){
	if(s.length()==0){
		cout<<pre<<" ";
	}
	else{
		for(int i=0;i<s.length();i++){
			backend(pre+s.substr(0,1),s.substr(1));
			rotate(s.begin(),s.begin()+1,s.end());
		}
	}
	
}
void perm(string s){
	
	sort(s.begin(),s.end());
	//cout<<s<<" ";
	do{
		cout<<s<<" ";
	}while(next_permutation(s.begin(),s.end()));
	cout<<endl;
	
}
int main(){
	int t;
	cin>>t;
	for(int tt=0;tt<t;tt++){
		string s;
		cin>>s;
		perm(s);
	}
	
	return 0;
}
