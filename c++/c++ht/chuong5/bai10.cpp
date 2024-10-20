#include <bits/stdc++.h>
using namespace std;
int main(){
    int i=0,num,daonguoc;
    cin>>num;
    daonguoc=num;
    while(num !=0){
        i=i*10;
        i=i+(num%10);
        num=num/10;
    }
    if(daonguoc==i){
        cout<<"La so plaindrome";
    }else cout<<"N";
    return 0;
}