//LANG : C++
#include<bits/stdc++.h>
using namespace std;

string s;



void rec(int i){
if(i<0) return;
 if(i==0){
   cout<<s<<'E'<<'\n';
   return;
 }
  s+="--\n";
  rec(i-1);
  for(int j=0;j<3;j++) s.pop_back();
  
  s+="||\n";
  rec(i-2);
  for(int j=0;j<3;j++) s.pop_back();
  
}

int main (){
int n;
cin>>n;
  rec(n);
}       

//https://beta.programming.in.th/tasks/1168



/*
                                          ""/1
                    "0"/2                                       "1"/9
          "00"/3             "01"/6                "10" /10             "11"/13
    "000"/4     "001"/5   "010"7    "011"8   "100"/11    "101"/12   "110"/14   "111"/15
*/                   

  

