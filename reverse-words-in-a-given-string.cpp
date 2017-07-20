#include<iostream>
#include<string.h>
#include<stack>

using namespace std;

int main(){
	int t;
	cin>>t;
	for(int tt=0;tt<t;tt++){
		string s;
		cin>>s;
		stack<string>st;
		string temp="";
		for(int i=0;i<s.length();i++){
			string g=s.substr(i,1);
			if(g!="."){
				temp=temp+g;
			}
			else{
				st.push(temp);
				temp="";
				}
		}
		st.push(temp);
		cout<<st.top();
		st.pop();
		while(!st.empty()){
			cout<<"."<<st.top();
			st.pop();
		}
		cout<<endl;
	}
	
}
