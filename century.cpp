#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll n;
    cin>>n;
    ll final=0;
    if(n%100!=0){
       final=1+(n/100);
    }else if(n%100==0){
        final=(n/100);
    }
    cout<<final;
    return 0;
}