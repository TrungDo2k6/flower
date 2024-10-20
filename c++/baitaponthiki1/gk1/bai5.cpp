#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,s=0,x;
    cin>>n;
    if(n>0&&n<=999999999){
    while(n>0){
        x=n%10;
        if(x%2==0){
            s+=x;
        }
        n=n/10;  
    }
    cout<<s;
    }else cout<<"N";
    return 0;
}