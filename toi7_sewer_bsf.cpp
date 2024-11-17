#include <bits/stdc++.h>
using namespace std;
int x[4]={0,0,1,-1};
int y[4]={1,-1,0,0};
queue<pair<int,int>> q;
char c[105][105];
int vis[105][105];

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int a,b;
  cin>>a>>b;
  for(int i=1;i<=a;i++){
    for(int j=1;j<=b;j++){
      cin>>c[i][j];
      vis[i][j]=INT_MAX;
    }
  }
 q.push({1,1});
 vis[1][1]=1;
 while(!q.empty()){
   int in=q.front().first;
   int jn=q.front().second;
   q.pop();
   for(int i=0;i<4;i++){
     int iin=in+x[i];
     int jjn=jn+y[i];
     if(c[iin][jjn]!='\0'){
       if(i==0 && (c[in][jn]!='B' && c[in][jn]!='R')) continue; //right
       if(i==1 && (c[iin][jjn]!='B' && c[iin][jjn]!='R')) continue;//left
       if(i==2 && (c[in][jn]!='B' && c[in][jn]!='D')) continue; //down
       if(i==3 && (c[iin][jjn]!='B' && c[iin][jjn]!='D')) continue;//up
       if(vis[in][jn]+1>vis[iin][jjn]) continue;
       else if(vis[in][jn]+1==vis[iin][jjn]){
         cout<<vis[iin][jjn]<<'\n'<<iin<<' '<<jjn;
          return 0;
       }
       q.push({iin,jjn});
       vis[iin][jjn]=vis[in][jn]+1;
     }
   }
 }
  /*
cout<<"\n\n";
for(int i=1;i<=a;i++){
  for(int j=1;j<=b;j++){
    if(vis[i][j]==INT_MAX) cout<<"- ";
    else cout<<vis[i][j]<<" ";
  }
  cout<<"\n";
}
  */
}


