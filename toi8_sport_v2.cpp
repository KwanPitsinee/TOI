//LANG : C++
#include<bits/stdc++.h>
using namespace std;

string s;

void rec(int kw,int kl){
	if(kw==0 || kl==0){
		for(int i=0;i<s.size();i++) cout<<s[i]<<' ';
		cout<<'\n';
		return;
	}
	s=s+'W';
	rec(kw-1,kl);
	s.pop_back();
	
	
	s=s+'L';
	rec(kw,kl-1);
	s.pop_back();
	
	
}

int main(){
int k;
int a,b;
cin>>k>>a>>b;
rec(k-a,k-b);	
}
