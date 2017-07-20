#include <iostream>
#include<vector>
#include<string.h>
using namespace std;
/* input format as follows
n: number of test cases
next n lines
text 'space' pattern
*/
// OUTPUT CONTAINS TEXT WHICH MAY NOT BE IN ORDER. FOR ORDER CHECK WHEN COUNT==PATERNLENGTH WHETHER c==PT[PTL-1]
int main() {
	//code
	int n;
	cin>>n;
	while(n--){
	    char txt[2000],pt[200];
	    
	    cin>>txt;char dum;
	    
	    cin>>pt;
	   // cout<<txt<<"\t"<<pt<<endl;
	    
	    
	    int txtl=strlen(txt);
	    int ptl=strlen(pt);
	    // Print the indices for debugging
	   /* for(int b=0;b<txtl;b++)
	    cout<<b;
	    cout<<"\t";
	    for(int b=0;b<ptl;b++)
	    cout<<b;
	    cout<<endl;*/
	    int ws=0,we=strlen(txt)-1,subs=-1,sube=-1;
	    vector<int>v(ptl,0);
	    
	    int ptr=ws;
	    int flag=-1;
	    int count=0;
	    while(ptr<we){
	        char c=txt[ptr];
	        ptr++;
	        for(int i=0;i<ptl;i++){
	            if(pt[i]==c &&v[i]==0){
	                v[i]=1;
	                count++;
	                
	                if(count==ptl ){
	                    subs=ws;
	                    sube=ptr-1;
	                    ws++;
	                    we=ptr-1;
	                   
	                    //reset vector
	                      for(int a=0;a<ptl;a++){
	                      	v[a]=0;
	                      }
	                    flag=1;
	                  //  cout<<" New start and end are "<<subs<<" "<<sube<<endl;
	                    break;
	                    
	                }
	                i=ptl;
	            }
	        }
	    }
	    if(flag==-1){
	        cout<<"not found\n";
	        return 0;
	    }
	  // cout<<" Im here";
	  
	    while(!(we==txtl-1 && (we-ws)<ptl)&&(we<=txtl-1 && ws<txtl-1)){
	       ptr=ws;
	        flag=0;
	        count=0;
	        //cout<<"Here\n";
	        //cout<<ws<<" "<<we<<endl;
	        while(ptr<=we){
	          char c=txt[ptr];  
	          ptr++;
	           for(int i=0;i<ptl;i++){
	            if(pt[i]==c && v[i]==0){
	                v[i]=1;
	                count++;
	                
	                if((count==ptl) ){
	                
	                    
	                    subs=ws;
	                    sube=ptr-1;
	                    we=sube;
	                    ws++;
	                   
	                    flag=1;
	                   // cout<<" New start and end are "<<subs<<" "<<sube<<endl;
	                   // Resetting the vector which checked whether all indices are covered or not
	                    for(int a=0;a<ptl;a++){
	                      	v[a]=0;
	                      }
	                    goto l1;
	                    
	                }
	                i=ptl;
	            }
	        } 
	        
	            
	        }
	        if(flag==0){
	            we++;
	           for(int a=0;a<ptl;a++){
	                      	v[a]=0;
	                      }
	        }
	      
	        l1: cout<<"";
	        
	        
	    }
	    if(we==-1 || ws==-1){
	        cout<<" Not found\n";
	    }
	    else{
	        for(int i=subs;i<=sube;i++){
	            cout<<txt[i];
	        }
	        cout<<endl;
	    }
	    
	    
	    
	}
	return 0;
}
