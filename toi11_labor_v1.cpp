#include<bits/stdc++.h>
using namespace std;

int t[1000001];
int main(){
  ios::sync_with_stdio(0); cin.tie(0);
  long long int m,n;
  cin>>m>>n;
  int tmax=1;
  for(int i=1;i<=m;i++){
    cin>>t[i];
    tmax=max(t[i],tmax);
  }
  long long int l=1 ,r=1ll*n*tmax;

  while(l<r){
    long long int mid=(l+r)/2;
    long long int cnt=0;
    for(int i=1;i<=m;i++){
      cnt=cnt+mid/t[i];
      if(cnt>=n) break;
    }
    if(cnt<n){
        l=mid+1;
    }
    else if(cnt>=n){
       r=mid;
    }
  }
  cout<<l;
}
