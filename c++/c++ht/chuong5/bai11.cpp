#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y=0,i;
    cin>>x;
    while(x!=0){
        y=(y*10)+(x%10);
        x=x/10;
    }
    for(i=y;i>0;i=i/10){
        switch (i%10){
            case 1:cout<<"one"<<endl;break;
            case 2:cout<<"two"<<endl;break;
            case 3:cout<<"three"<<endl;break;
            case 4:cout<<"four"<<endl;break;
            case 5:cout<<"five"<<endl;break;
            case 6:cout<<"six"<<endl;break;
            case 7:cout<<"seven"<<endl;break;
            case 8:cout<<"eight"<<endl;break;
            case 9:cout<<"nine"<<endl;break;
          }
        }
    return 0;
}