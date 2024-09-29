// LANG : C++
#include <bits/stdc++.h>
using namespace std;

int class_of_std[1005];
queue<int> q[11];

int main(){
  ios::sync_with_stdio(0); cin.tie(0);
 int n,m;
  cin>>n>>m;
  for(int i=1;i<=m;i++){
    int room,id;
    cin>>room>>id;
    class_of_std[id]=room;
  }
  char t;
  while(1){
    cin>>t;
    if(t=='X') {
      cout<<0;
      break;
    }
    if(t=='E'){
      int id;
      cin>>id;
      if(q[class_of_std[id]].empty()){// id is the first student of his/her class
        q[0].push(class_of_std[id]);
      }
      q[class_of_std[id]].push(id);
    }
    else if(t=='D'){
    	if(q[0].empty()){
        cout<<"empty\n";
        continue;
      }
      int first_room=q[0].front();
      cout<<q[first_room].front()<<"\n";
      q[first_room].pop();
      if(q[first_room].empty()){
        q[0].pop();
      }
    }
  }
}
