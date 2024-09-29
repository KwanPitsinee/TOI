#include<bits/stdc++.h>
using namespace std;
char a[30][100];
void mountain(int s,int h){
  for(int i=1;i<=h;i++){
    for(int j=1;j<=2*h;j++){
      if(i==j){
        if(a[i][j+s-1]!='X'){ 
          if(a[i][j+s-1]=='\\') a[i][j+s-1]='v';
          else a[i][j+s-1]='/';
        }
      }
      if(i+j==2*h+1){
        if(a[i][j+s-1]!='X') {
          if(a[i][j+s-1]=='/') a[i][j+s-1]='v';
          else a[i][j+s-1]='\\';
        }
      }
      if(i<j && i+j<2*h+1){
        a[i][j+s-1]='X';
      }
    }
  }
}
void print(int m,int n){
  for(int i=m;i>=1;i--){
    for(int j=1;j<=n;j++){
      cout<<a[i][j];
    }
    cout<<'\n';
  }
}
  
int main(){
  int n,s,h;
  int mxh=0,mxs=0; 
  cin>>n;
  memset(a,'.',sizeof a);
  for(int i=1;i<=n;i++){
    cin>>s>>h;
    if(h>=mxh){
      mxh=h;
    }
    if(s+2*h-1>=mxs){
      mxs=s+2*h-1;
    }
    mountain(s,h);
  }
  print(mxh,mxs);
  
}
