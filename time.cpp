#include <stdio.h>
#include <time.h>
#include <iostream>
using namespace std;
int main(){
  time_t t=time(0);
  cout<<t<<endl;
  cout<<t*2.0<<endl;
  return 0;
}
