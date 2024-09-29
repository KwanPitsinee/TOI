//LANG :C++
#include<bits/stdc++.h>
using namespace std;
int h[10000];
int main(){
	int  d;
	cin>>d;
  for(int k=0;k<pow(2,d);k++){
    int m=k,i=0;
	  while(m>=2){
		  h[i]=m%2;
		  m=m/2;
		  i=i+1;
	  }
	  h[i]=m;		
    for(int l=0;l<d;l++){ 
	    if(h[l]==0){
        
        for(int j=d-1;j>=0;j--){
		      cout<<h[j];
	      }
        
        cout<<" ";
        for(int j=d-1;j>=0;j--){
		      if(j==l) cout<<1;
          else cout<<h[j];
	      }
        cout<<"\n";
      }
    }
  }
}
//https://beta.programming.in.th/tasks/toi7_space
