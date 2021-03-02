#include <iostream>

using namespace std;

int main(){
    int x,i,t,k,a,b;
    cin>>x;
    for(i=1;i<=x;i++){
        t=i/3;
        if(i-t*3==0){
            cout<<" "<<i;
        }else{
            for(k=10000;k>=1;k=k/10){
                if(k==10000) b=i;
                a=b/k;
                if(a==3){
                    cout<<" "<<i;
                    break;
                }
                b=b-a*k;
            }
        }
    }
    cout<<endl;
    return 0;
}
