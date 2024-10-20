#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,dem=0;
    cin>>n;
    if(n<=0||n>=99999999){
         cout<<"N";
    }else{
        while(n!=0){
        if(n%2==1){
            int l=n%10;
            cout<<l<<" ";
            dem++;
        }
        n=n/10;
      }
      cout<<endl;
      cout<<dem;
    }
    return 0;
}