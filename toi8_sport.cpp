//LANG : C++
#include<bits/stdc++.h>
using namespace std;
//string s;
vector<char> s;
void rec(int kw, int kl){
  if(kw==0 || kl==0){
    for(int i=0;i<s.size();i++) cout<<s[i]<<" ";
    cout<<"\n";
    return;
  }
  s.push_back('W');
  rec(kw-1,kl);
  s.pop_back();
  s.push_back('L');
  rec(kw,kl-1);
  s.pop_back();
  
}
int main (){
  int k,a,b;
  cin>>k>>a>>b;
  rec(k-a,k-b);
}               
//https://beta.programming.in.th/tasks/toi8_sport
//https://beta.programming.in.th/tasks/1168
/*
                                          ""/1
                    "0"/2                                       "1"/9
          "00"/3             "01"/6                "10" /10             "11"/13
    "000"/4     "001"/5   "010"7    "011"8   "100"/11    "101"/12   "110"/14   "111"/15
*/             
