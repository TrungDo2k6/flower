#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            cout<<setw(4)<<"*";
        }
        cout<<endl;
    }
    return 0;
}