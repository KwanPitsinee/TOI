// LANG : C++
#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(0); cin.tie(0);
  int n;
  cin>>n;
  string s;
  cin>>s;

  for(int k=1;k<=n/2;k++){
    if(n%k==0){
      bool b=true;
      for(int i=0;i<k;i++){
        for(int j=i+k;j<n;j+=k){
          if(s[j]!=s[j-k]){
            b=false;
            break;
          }
        }
        if(b==false) break;
      }
      if(b==true){
        cout<<k;
        return 0;
      }
    }
  }

  cout<<n;
  
}

