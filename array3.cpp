#include <iostream>

using namespace std;

int main(){

  int i;
  int a[3];
  for(i=0;i<4;i++){
    a[i]=i*3;
  }
  for(i=0;i<4;i++){
    cout<<a[i]<<endl;
  }

  return 0;
}
