#include <bits/stdc++.h>
using namespace std;

using ll=long long int;
int a[155][155];
queue<pair<int,int>>q;
int visited[155][155];
int visited2[155][155];
int x[4]={0,0,1,-1};
int y[4]={1,-1,0,0};

int main() {
  ios::sync_with_stdio(0);cin.tie(0);
  int m,n;
  int rs,cs;
  int re,ce;
  int cnt=0;
  cin>>m>>n>>rs>>cs>>re>>ce;
  for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
      cin>>a[i][j];
      visited[i][j]=INT_MAX;
      visited2[i][j]=INT_MAX;
    }
  }
  q.push({rs,cs});
  visited[rs][cs]=1;
  while(!q.empty()){
    int ax=q.front().first;
    int ay=q.front().second;
    q.pop();
    for(int i=0;i<4;i++){
      int axn=ax+x[i];
      int ayn=ay+y[i];
      if(axn<=m && axn>=1 && ayn<=n && ayn>=1){
        if(visited[ax][ay]+1<visited[axn][ayn]){
          if(a[axn][ayn]==1){
            q.push({axn,ayn});
            visited[axn][ayn]=visited[ax][ay]+1;
          }
          else if(a[axn][ayn]==0){
            visited[axn][ayn]=visited[ax][ay]+1;
          }
        }
      }
    }
  }

  q.push({re,ce});
  visited2[re][ce]=1;
  while(!q.empty()){
    int ax=q.front().first;
    int ay=q.front().second;
    q.pop();
    for(int i=0;i<4;i++){
      int axn=ax+x[i];
      int ayn=ay+y[i];
      if(axn<=m && axn>=1 && ayn<=n && ayn>=1){
        if(visited2[ax][ay]+1<visited2[axn][ayn]){
          if(a[axn][ayn]==1){
            q.push({axn,ayn});
            visited2[axn][ayn]=visited2[ax][ay]+1;
          }
          else if(a[axn][ayn]==0){
            visited2[axn][ayn]=visited2[ax][ay]+1;
          }
        }
      }
    }
  }
  int mn=INT_MAX;
for(int i=1;i<=m;i++){
  for(int j=1;j<=n;j++){
    if(a[i][j]==0 && visited[i][j]<INT_MAX && visited2[i][j]<INT_MAX){
      cnt++;
      mn=min(mn,visited[i][j]+visited2[i][j]-1);
    }
  }
}
  
 cout<<cnt<<'\n'<<mn;
}

/*
5 8
4 5
2 8
0 0 1 1  0  0 0  0
1 0 1 1  0  1 1  1
1 0 1 1  1  0 0  1
1 1 0 0  1  0 0  1
0 0 1 1  0  1 1  1


# # 6 5 # # # #
- # 5 4 # 3 2 1
- # 4 3 2 # # 2
- - # # 1 # # 3
# # - - # 6 5 4
  */
//https://beta.programming.in.th/tasks/toi8_maze
