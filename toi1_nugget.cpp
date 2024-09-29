#include<bits/stdc++.h>
using namespace std;


int dp[105];

int main(){
ios::sync_with_stdio(0); cin.tie(0);
  int n;
  cin>>n;
  if(n<6){
    cout<<"no";
    return 0;
  }
  dp[6]=1;
  dp[9]=1;
  dp[20]=1; 
  for(int i=1;i<=n;i++){
    if(i-6>=0 && dp[i-6]==1) dp[i]=1;
    else if(i-9>=0 && dp[i-9]==1) dp[i]=1;
    else if(i-20>=0 && dp[i-20]==1) dp[i]=1;
    if(dp[i]==1) cout<<i<<"\n";
  }

  
}

