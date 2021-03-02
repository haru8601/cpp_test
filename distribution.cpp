#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h> /*for srand48,drand48*/
using namespace std;

int main()
{
  srand48((unsigned)time(NULL));　//random initialize
  cout<<time<<endl;
  double R=drand48();
  

  cout<<R<<endl;
  return 0;
}
