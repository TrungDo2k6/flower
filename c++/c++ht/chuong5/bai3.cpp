#include <iostream>
using namespace std;
int main(){
    int n,tong=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            cout<<i<<" ";
           tong+=i;
        }     
    }
    cout<<tong;
    return 0;
}