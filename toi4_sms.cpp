#include<bits/stdc++.h>
using namespace std;
char button[10][4]={
{'-','-','-','-'},//0
{'-','-','-','-'},//1 del
{'C','A','B','-'},//2
{'F','D','E','-'},//3
{'I','G','H','-'},//4
{'L','J','K','-'},//5
{'O','M','N','-'},//6
{'S','P','Q','R'},//7
{'V','T','U','-'},//8
{'Z','W','X','Y'},//9
};
int main(){
  vector<char> sms;
  int n,s,m,h,v;
  cin>>n;
  cin>>s>>m;
  if(s!=1){
    if(s==7 || s==9) sms.push_back(button[s][m%4]);
    else sms.push_back(button[s][m%3]);
  }
  for(int i=1;i<=n-1;i++){
    cin>>h>>v>>m;
    s=s+h+v*3;
    if(s!=1){
      if(s==7 || s==9) sms.push_back(button[s][m%4]);
      else sms.push_back(button[s][m%3]);
    }
    else if(s==1){
      for(int i=1;i<=m;i++){
        if(sms.size()>0) sms.pop_back();
      }
    }
  }
  if(sms.size()>0) {
    for(int i=0;i<sms.size();i++)  cout<<sms[i];
  }
  else cout<<"null";
}
