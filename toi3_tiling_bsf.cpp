#include<bits/stdc++.h>
using namespace std;

int x[4]={0,0,1,-1};
int y[4]={1,-1,0,0};
int a[18][18];
queue<pair<int,int>>q;
int main(){
  ios::sync_with_stdio(0); cin.tie(0);
  int ans=0;
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      cin>>a[i][j];
    }
  }
for(int i=1;i<=n;i++){
  for(int j=1;j<=n;j++){
    if(a[i][j]!=0){
      int cnt=1;
      int mni=i, mxi=i, mnj=j, mxj=j;
      q.push({i,j});
      int af=a[i][j];
      a[i][j]=0;
      while(!q.empty()){
        int in=q.front().first;
        int jn=q.front().second;
        q.pop();
        for(int k=0;k<4;k++){
          int ii=in+x[k];
          int jj=jn+y[k];
          if(a[ii][jj]==af){
            q.push({ii,jj});
            a[ii][jj]=0;
            cnt++;
            mni=min(mni,ii);
            mnj=min(mnj,jj);
            mxi=max(mxi,ii);
            mxj=max(mxj,jj);
          }
        }
      }
      if(cnt==3 && mxi-mni==1 && mxj-mnj==1){
        ans++;
        }
    }
   }
  }
 cout<<ans;
}

/*mni=3   mxi=4    mnj=3   mxj=4  cnt=3
               
                3,3  3,4         3,3  3,4
                4,3                   4,4 

mni=3   mxi=3    mnj=3   mxj=5  cnt=3
                3,3  3,4  3,5
  
*/
//https://beta.programming.in.th/tasks/toi3_tiling
