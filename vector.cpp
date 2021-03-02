#include <iostream>

using namespace std;

int main(){
  int n,m,e,d,i,i2,i3,k,f;
    cin>>n>>m;
    int a[n*m+1],b[m+1],c[n+1];
    for(k=0;k<=m;k++){
        b[k]=0;
    }
    for(k=0;k<=n;k++){
	c[k]=0;
    }
    for(k=0;k<=n*m;k++){
        a[k]=0;
    }
    for(i=1;i<=n*m;i++){
        cin>>a[i];
    }
    //cout<<a[10]<<endl;
    for(i2=1;i2<=m;i2++){
        cin>>b[i2];
    }
    //cout<<b[2]<<endl;
    
    for(i3=1;i3<=n*m;i3++){
      d=(i3+(m-1))/m;
      e=(i3-1)/m;
      f=i3/m;
      c[e+1]+=(a[i3]*b[i3-e*m]);
      cout<<"c is"<<c[d]<<"/d is"<<d<<"/a is"<<a[i3]<<"/b is"<<b[i3-e*m]<<"/i3,e,f,i3-em:"<<i3<<","<<e<<","<<f<<","<<i3-e*m<<endl;
      if(i3-f*m==0) cout<<c[d]<<endl;
    }
    
    return 0;
}
