// LANG : C++
#include <bits/stdc++.h>
using namespace std;
char a[2005][2005];
int dr[8]={0,0,1,-1,1,1,-1,-1};
int dc[8]={1,-1,0,0,1,-1,1,-1};
int m,n; //size
int cnt;
int r,c;

void rec() {
  for(int i=0;i<8;i++){
    r+=dr[i],c+=dc[i];
    if(r>=1 && r<=m && c>=1 && c<=n && a[r][c]=='1'){
      a[r][c]='0';
      rec();
    }
    r-=dr[i],c-=dc[i];
  }
}
int main() {
  ios::sync_with_stdio(0);cin.tie(0);
  cin>>m>>n;
  for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
      cin>>a[i][j];
    }
  }
  for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
      if(a[i][j]=='1'){
        cnt++;
        a[i][j]='0';
        r=i,c=j;
        rec();
      }
    }
  }
  cout<<cnt;
}
//https://beta.programming.in.th/tasks/toi11_candle
