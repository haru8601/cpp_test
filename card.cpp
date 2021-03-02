#include <iostream>

using namespace std;

int main(){
  int n,i,k,l;
    cin>>n;
    char a;
    int num,s[14],h[14],c[14],d[14];
    for(l=0;l<14;l++){
      s[l]=0;
      h[l]=0;
      c[l]=0;
      d[l]=0;
    }
    for(i=0;i<n;i++){
        cin>>a>>num;
        if(a=='S'){
            s[num]=1;
        }else if(a=='H'){
            h[num]=1;
        }else if(a=='C'){
            c[num]=1;
        }else if(a=='D'){
            d[num]=1;
        }
    }
    for(k=1;k<=13;k++){
        if(s[k]!=1) cout<<"S "<<k<<endl;
    }
    for(k=1;k<=13;k++){
        if(h[k]!=1) cout<<"H "<<k<<endl;
    }
    for(k=1;k<=13;k++){
        if(c[k]!=1) cout<<"C "<<k<<endl;
    }
    for(k=1;k<=13;k++){
        if(d[k]!=1) cout<<"D "<<k<<endl;
    }
    
    
    return 0;
}
