#include<bits/stdc++.h>
using namespace std;
char a[51000][80];
int mx;
int main(){
  memset(a,'o',sizeof a);
  int n,p,q,r;
  cin>>n;
  for(int i=1;i<=n;i++){
 		cin>>p>>q>>r;
 		for(int j=1;j<=r;j++){
      a[p][q+j-1]='x';
    }
    if(mx<=p){
	 	    mx=p;
	   }    
 }
  for(int i=1;i<=mx;i++){
    for(int j=1;j<=70;j++){
      cout<<a[i][j];
    }
    cout<<'\n';
  }
  
}
//https://beta.programming.in.th/tasks/toi1_pattern
