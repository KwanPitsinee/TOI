// LANG : C++
#include <bits/stdc++.h>
using namespace std;

int a[105][45];
vector<int> ans;
bool done=false;

void rec(int t, int l,int n,int T) {
  if(t==T){
    for(auto e:ans) cout<<e<<'\n';
    done=true;
    return;
  }
  if(l-1>=1 && a[t+1][l-1]==0 && done==false){
    ans.push_back(1);
    rec(t+1,l-1,n,T);
    ans.pop_back();
  }
  if(a[t+1][l]==0 && done==false){
    ans.push_back(3);
    rec(t+1,l,n,T);
    ans.pop_back();
  }
  if(l+1<=n  && a[t+1][l+1]==0 && done==false){
    ans.push_back(2);
    rec(t+1,l+1,n,T);
    ans.pop_back();
    
  }
  

}

int main() {
  ios::sync_with_stdio(0);cin.tie(0);
int n,m,t;
  cin>>n>>m>>t;
  for(int i=1;i<=t;i++){
    for(int j=1;j<=n;j++){
      cin>>a[i][j];
    }
  }
  rec(0,m,n,t);
}


