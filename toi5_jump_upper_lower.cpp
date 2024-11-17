#include<bits/stdc++.h>
using namespace std;
vector<int>line;
int t;
int mx=0;
int main(){
  ios::sync_with_stdio(0); cin.tie(0);
  int n,k;
  cin>>n>>k;
  while(n--){
    cin>>t;
    line.push_back(t);
  }
 /* 6
3 6 7 9 10 11 13 16 18 19 20
  upper
  3->9   ans=3  index of 10  4     4-0=4
  6->12  ans=4  index of 13  6    6-1=5*/
  for(int i=0;i<line.size();i++){
    auto l=upper_bound(line.begin(),line.end(),line[i]+k)-line.begin();
    mx=max(mx,l-i-1);
  }
  cout<<mx;
}

//https://beta.programming.in.th/tasks/toi5_jump


