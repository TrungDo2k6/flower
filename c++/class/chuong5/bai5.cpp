#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"Bang ma tu "<<a<<" den "<<b<<" la:";
    if(a>=48&&b<=127){
        for(int i=a;i<=b;i++){
            cout<<"Ki tu thu "<<i<<" la:"<<char(i)<<endl;
        }
    }else cout<<"N";
    return 0;
}