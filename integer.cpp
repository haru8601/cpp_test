#include <stdio.h>
#include <cmath>
#include <iostream>

using namespace std;

int main(){
  int integer;
  double time_sys;

  cout<<"Enter the time"<<endl;
  cin>>time_sys;

  integer=time_sys/1;

  cout<<"time_sys: "<<time_sys<<"\n";
  cout<<"integer: "<<integer<<"\n";
  if(time_sys-integer*1==0){
    cout<<"That's INTEGER!"<<"\n";
  }else{
    cout<<"That's NOT integer"<<endl;
  }
}
