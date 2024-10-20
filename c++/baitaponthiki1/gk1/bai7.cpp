#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,gt=1,tong=0;
    cin>>n;
    if(n>0&&n<=10){
    for(int i=1;i<=n;i++){
        gt*=i;
        tong+=i*gt;
    }
    cout<<tong;
    }else cout<<"N";
    return 0;
}