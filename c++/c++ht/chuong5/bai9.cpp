#include <bits/stdc++.h>
using namespace std;
int main(){
    int bd,kt,i,temp1,temp2,so,n=0,sum=0;
    cin>>bd>>kt;
    for(i=bd;i<=kt;i++){
        temp1=i;
        temp2=i;//dem so co bao nhieu chu so( co bao nhieu so mu)
        while(temp1 !=0){
            temp1=temp1/10;
            n++;//ket qua cua mu n
        }
        while(temp2!=0){
            so=temp2%10;
            sum+=pow(so,n);
            temp2=temp2/10;
        }
        if (sum==i){//kiem tra xem co bang tong cua so do khong
            cout<<i<<endl;
        }
        n=0;//gan lai de tinh so tiep theo
        sum=0;
    }
    return 0;
}