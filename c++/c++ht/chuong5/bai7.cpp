#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    for(int i=0;i<=n;i++){
        if(i%2==0){
            sum+=i;
        }
    }
   /* for(int i=0;i<=n;i+=2){
        sum+=i;
    }*/
    cout<<sum;
}