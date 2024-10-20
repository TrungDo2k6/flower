#include <iostream>
using namespace std;
int main(){
    int s1=0,s2=1,tt,so;
    cin>>so;
    tt=s1+s2;
   while(tt<=so){
    cout<<tt<<",";
    s1=s2;
    s2=tt;
    tt=s1+s2;
   }
   return 0;
}