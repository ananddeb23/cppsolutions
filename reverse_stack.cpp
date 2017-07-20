#include<iostream>
#include<stack>

using namespace std;
stack<int>st;
void reverse(){
	
	int t=st.top();
	st.pop();
	if(st.size()==0){
		st.push(t);
	}
	
	else{
		reverse();
			st.push(t);
	}

	
	
}
int main(){
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(11);
st.push(27);
st.push(39);
st.push(43);
st.push(12);
st.push(62);
st.push(35);
st.push(41);

reverse();
while(!st.empty()){
	int h=st.top();st.pop();cout<<h<<endl;
}


}

