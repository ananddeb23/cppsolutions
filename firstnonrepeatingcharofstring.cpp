#include<iostream>
#include <vector>
#include<string.h>
using namespace std;

int main(){
	char *str="GeeksforGeeks";
	vector<int> v(128,0);
	
	for(int x=0;x<strlen(str);x++)
	{
		int c=str[x];
		v[c]++;
	}
	for(int x=0;x<strlen(str);x++){
		int c=str[x];
		int ct=v[c];
		if(ct==1){
			cout<<str[x]<<endl;
			break;
		}
	}
	
	
	
	return 0;
}
