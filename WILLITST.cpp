#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	
	long n;
	cin>>n;
	//double n1=n;
	
	if(!(n&(n-1))){
	
	cout<<"TAK";
	
}
else{
	cout<<"NIE";
}
	
	return 0;
	
}
