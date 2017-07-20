#include<iostream>
#define   C 6
#define   R 3
using namespace std;
void printspiral(int ar[R][C]){
	int rs=0,cs=0,re=R,ce=C;
	
	while(rs<re && cs<ce){
		for(int i=cs;i<ce;i++){
			cout<<ar[rs][i]<<",";
		}
		rs++;
		for(int i=rs;i<re;i++){
			cout<<ar[i][ce-1]<<",";
		}
		ce--;
		if(rs<re){
			for(int i=ce-1;i>=1;i--){
				cout<<ar[re-1][i]<<",";
			}
			re--;
		}
		if(cs<ce){
			for(int i=re-1;i>=rs;i--){
				cout<<ar[i][cs]<<",";
			}
			cs++;
		}
	}
	
	
}
int main(){
	int ar[R][C] = { {1,  2,  3,  4,  5,  6},
        {7,  8,  9,  10, 11, 12},
        {13, 14, 15, 16, 17, 18}};
	
	printspiral(ar);
	
}
