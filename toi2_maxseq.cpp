//LANG : C++
#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

ll dp[200005];

int main(){
  ios::sync_with_stdio(0); cin.tie(0);
  int n; cin>>n;
  dp[0]=0;
  for(int i=1;i<=n;i++){
    int a; cin>>a;
    dp[i]=dp[i-1]+a;
  }
  int mx=-130;
  int l=0;
  int ansr,ansl;
  for(int r=1;r<=n;r++){
    if(dp[r]-dp[l]>mx){
      mx=dp[r]-dp[l];
      ansr=r;
      ansl=l;
    }
    if(dp[r]<dp[l]) l=r;
  }
  if(mx<=0){
    cout<<"Empty sequence";
  }
  else{
    for(int i=ansl+1;i<=ansr;i++){
      cout<<dp[i]-dp[i-1]<<' ';
    }
    cout<<'\n'<<mx;
}
}
