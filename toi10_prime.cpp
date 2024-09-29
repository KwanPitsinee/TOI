#include<bits/stdc++.h>
using namespace std;

int p[8000000];
int c;

int main(){
    int n;
    cin>>n;
    for(int i=2;i<8000000;i++){
     if(p[i]==0){
       c++;
       if(c==n) { 
         cout<<i;
         break;
        }
       for(int j=2*i;j<8000000;j+=i){
        p[j]=1;
       }
      }
   } 
}



//https://beta.programming.in.th/tasks/toi10_prime
