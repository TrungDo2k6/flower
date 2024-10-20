#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,tong=0,sum=0;
    cin>>n;
    if(n<=0||n>20){
        cout<<"N";
    }else{
        for(int i=1;i<=n;i++){
            tong+=i;
            sum+=i*(tong);
        }
        cout<<sum;
    }
    return 0;
}