#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <math.h>
#include <cstdlib>
using namespace std;

int aa;
double sigma=0.5;
double x,y;
inline void InitRand(){
  time_t aa;
  srand48(aa);
}

inline double Random(){
  return drand48();
}

int main()
{
  string filename = "randomout.dat";
  ofstream writing_file;
  writing_file.open(filename,ios::out); /*output in a file*/
  cout<<"writing"<<filename<<"..."<<endl;
  InitRand(); /*initialize before loop starts*/
   
  for (int n=0; n<100; n++){
    //cout<<"--------------"<<endl;
    //cout<<aa<<endl;
    x=sqrt(-2.0*sigma*sigma*log(Random()));
    y=(x/(sigma*sigma))*exp(-(x*x)/(2.0*sigma*sigma));
    writing_file<<n<<" "<<x<<" "<<y<<endl;
  }
    
  return 0;
}
