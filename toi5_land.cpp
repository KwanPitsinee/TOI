#include <bits/stdc++.h>
using namespace std;
using ll=long long int;
int dx[8]={0,0,1,-1,1,1,-1,-1};
int dy[8]={1,-1,0,0,1,-1,1,-1};
double a[5][5];
bool visited[5][5];
int m,n;
double mn=DBL_MAX;
void rec(int cnt,double money){
  if(cnt==m*n){
    mn=min(money,mn);
    return;
  }
  for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
      if(visited[i][j]==false){
        visited[i][j]=true;
        double money2=money+a[i][j];
        for(int k=0;k<8;k++){
          a[i+dx[k]][j+dy[k]]=0.1*a[i][j]+a[i+dx[k]][j+dy[k]];
        }
        rec(cnt+1,money2);
        visited[i][j]=false;
        for(int k=0;k<8;k++){
          a[i+dx[k]][j+dy[k]]=a[i+dx[k]][j+dy[k]]-0.1*a[i][j];
        }
      }
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
  rec(0,0);
  cout<<fixed<<setprecision(2)<<mn;
}
//https://beta.programming.in.th/tasks/toi5_land
