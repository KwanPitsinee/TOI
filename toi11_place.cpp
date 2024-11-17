#include <bits/stdc++.h>
using namespace std;
using ll=long long int;
using pii=pair<ll,int>;

vector<pair<int,int>> a[200005];
priority_queue<pii> pq;
bool visited[200005];
ll dis[200005];

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n,m; cin>>n>>m;
  for(int i=1;i<=m;i++){
    int s,d,l; cin>>s>>d>>l;
    a[s].push_back({d,l});
    a[d].push_back({s,l});
  }
  dis[1]=0;
  pq.push({dis[1],1});
  
  while(!pq.empty()){
    int pqdis=pq.top().first;
    int pqcity=pq.top().second;
      pq.pop();
    
    if(visited[pqcity]==true) continue;
      visited[pqcity]=true;
  
    for(auto e:a[pqcity]){
      int acity=e.first;
      int adis=e.second;
      if(visited[acity]==false && dis[acity]<adis ){
        dis[acity]=adis;
        pq.push({dis[acity],acity});
      }
    }
  }
  ll toldis=0;
  for(int i=2;i<=n;i++){
    toldis=toldis+dis[i]-1;
  }
  cout<<toldis;
}
//https://beta.programming.in.th/tasks/toi11_place
