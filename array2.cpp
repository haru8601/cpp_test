#include <iostream>

using namespace std;

int main(){
  int n,k,i,num,m,j;
  cin>>n;
  int b,f,r,v,a[121];
  for(k=0;k<121;k++){
    a[k]=0;
  }
  for(i=0;i<n;i++){
    cin>>b>>f>>r>>v;
    num=b*30-(3-f)*10-(10-r);
    a[num]+=v;
  }

  for(k=1;k<=120;k++){
    m=k/10;
    j=k/30;
    cout<<" "<<a[k];
    if(k-m*10==0){
      cout<<endl;
    }
    if(k-j*30==0&&k!=120){
      cout<<"####################"<<endl;
    }
  }
      
  return 0;
}
