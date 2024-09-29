// LANG : C++
#include <bits/stdc++.h>
using namespace std;

char a[2005][2005];
int dr[8]={0,0,1,-1,1,1,-1,-1};
int dc[8]={1,-1,0,0,1,-1,1,-1};
int m,n; //size
int cnt;

void rec(int r, int c) {
  
  for(int i=0;i<8;i++){
    int rr=r+dr[i],cc=c+dc[i];
    if(rr>=1 && rr<=m && cc>=1 && cc<=n && a[rr][cc]=='1'){
      a[rr][cc]='0';
      rec(rr,cc);
    }
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
        rec(i,j);
      }
    }
  }
  
  cout<<cnt;
}

//https://beta.programming.in.th/tasks/toi11_candle

