#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,tich=1;
    cin>>n;
    for(int i=0;n>0;n=n/10){
        tich=tich*(n%10);
    }
    cout<<tich;

 /* while(n!=0){
        tich*=(n%10);
        n=n/10;
    }
    cout<<tich;

    do{
        tich*=(n%10);
        n=n/10;
    }while(n!=0);*/
    return 0;
}