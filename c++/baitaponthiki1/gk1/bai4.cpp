#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,n;
    long double s=0;
    cin>>x>>n;
    if(x<=0||x>n||n<2||n>10){
        cout<<"N";
    }else {
        if (x>0&&x<=n&&n>=2&&n<=10){
            for(int i=1;i<=n;i++){
                s+=pow(x,2*i);
            }
        }
        cout<<setprecision(0)<<fixed<<s;
    }
    return 0;
}