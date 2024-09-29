// LANG : C++
#include <bits/stdc++.h>
using namespace std;

int a[25][25];
int dr[4]={0,0,1,-1};
int dc[4]={1,-1,0,0};
int m; //is size of mountain
int mx=-5;

void rec(int r, int c) {
  if(a[r][c]>mx) mx=a[r][c];
  
  for(int i=0;i<4;i++){
    int rr=r+dr[i], cc=c+dc[i];
    if(rr>=1 && rr<=m && cc>=1 && cc<=m && a[rr][cc]!=100 && a[rr][cc]>a[r][c]){
      rec(rr,cc);
    }
  }

  
  
}

int main() {
  ios::sync_with_stdio(0);cin.tie(0);
  
  int x,y; //x same column //y same row
  cin>>m>>x>>y;
  for(int i=1;i<=m;i++){
    for(int j=1;j<=m;j++){
      cin>>a[i][j];
    }
  }
  rec(y,x);
  cout<<mx;
}

//https://beta.programming.in.th/tasks/toi4_temp

