#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,n;
    long double s=0,tong=0;
    cin>>x>>n;
    if(x>=2&&n>=1&&n<=20){
        for(int i=1;i<=n;i++){
            tong+=i;
            s+=pow(x,i)*tong;
        }
        cout<<setprecision(0)<<fixed<<s;
    }else cout<<"N";
    return 0;
}