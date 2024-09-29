//LANG : C++
#include<bits/stdc++.h>
using namespace std;

queue<int> a[2];

int main(){
	int n;
    string st;
    cin>>n>>st;
    int cnt=0;
    for(auto e:st){
    	a[0].push(e);
    	a[1].push(e);
	}
	while(1){
		int b=a[1].front();
		a[1].pop();
		a[1].push(b);
		cnt++;
		if(a[0]==a[1]){
			cout<<cnt;
			break;
		}
	}
}
