#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int tt=0;tt<t;tt++){
		string s;
		cin>>s;
		int len=s.length();
		bool flag =false;
		stack<string> st;
		for(int x=0;x<len;x++){
			string g=s.substr(x,1);
			
			if(g=="{"){
				st.push("}");
			}
			else if(g=="(")
			st.push(")");
			else if(g=="[")
			st.push("]");
			else if(g=="}")
			{
				if(!(st.empty()) && st.top()==g){
					st.pop();
				}
				else{
					cout<<"not balanced\n";
					flag=true;
					x=len;
				}
			}
			else if(g==")")
			{
				if(!(st.empty()) && st.top()==g){
					st.pop();
				}
				else{
					cout<<"not balanced\n";
					flag=true;
					x=len;
				}
			}
			else if(g=="]")
			{
				if(!(st.empty()) && st.top()==g){
					st.pop();
				}
				else{
					cout<<"not balanced\n";
					flag=true;
					x=len;
				}
			}
		}
		if(flag==false && !(st.empty())){
			cout<<"not balanced\n";
		}
		else if(flag==false && st.empty()){
			cout<<"balanced\n";
		}
	}
	
	return 0;
}

