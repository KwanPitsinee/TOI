// LANG : C++
#include <bits/stdc++.h>
using namespace std;
using ll=long long int;
int a[1005][1005];

int main(){
  ios::sync_with_stdio(0); cin.tie(0);
 int m,n;
  cin>>m>>n;
  
    int mx=0;
    for(int i=1;i<=m;i++){
      for(int j=1;j<=n;j++){
        cin>>a[i][j];
        if(i%2==1){
          if(a[i-1][j-1]>=a[i-1][j]){
            a[i][j]+=a[i-1][j-1];
          }
          else{
            a[i][j]+=a[i-1][j];
          }
        }
        else{
          if(a[i-1][j]>=a[i-1][j+1]){
            a[i][j]+=a[i-1][j];
          }
          else{
            a[i][j]+=a[i-1][j+1];
          }
          
        }
      }  
    }
    for(int j=1;j<=n;j++){
      mx=max(a[m][j],mx);
    }
    cout<<mx<<'\n';
  
 
  
}


