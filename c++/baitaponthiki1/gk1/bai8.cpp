#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,kq=0,sum=0;
    cin>>n;
    if(n<0||n>500){
        cout<<"N";
    }else{
            for(int i=1;n>0;n=n/2){
                kq=n%2;
                sum+=i*kq;
                i=i*10;
             }
            cout<<sum;
    }
    return 0;
}