#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,i;
    cin>>a>>b;
    if(a>=48 && b<=127){
        cout<<"Hien thi bang ma ASCII"<<endl;
        for(i=a;i<=b;i++){
            cout<<i<<" ---"<<char(i)<<endl;
        }
    }else cout<<"Khong thoa man";
    return 0;
}