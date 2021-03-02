#include <iostream>

using namespace std;

int main(){
    int x,i,t,n;
    cin>>x;
    for(i=1;i<=x;i++){
        t=i/3;
        n=i/10;
        if(i-t*3==0){
            cout<<" "<<i;
        }else if(i-n*10==3){
            cout<<" "<<i;
        }
    }
    cout<<endl;
    return 0;
}
