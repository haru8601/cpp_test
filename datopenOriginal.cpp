#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
  FILE *fp; /*to declear file pointer*/

  /*how to write .dat file*/
  // fp=fopen("datopen.dat","w"); /*open the file*/ /*w is to write*/

  // char a[]="test"; 
  // int b=122;
  // fprintf(fp,"%s %d\n",a,b); /*write the words in the file*/
  // cout<<"finish writing"<<endl; /*output the word in the screen*/
  // fclose; /*close the file*/

  /*how to read .dat file*/
  fp=fopen("datopen.dat","r"); /*r is to read*/

  char x[20];
  double y,z;
  fscanf(fp,"%s %lf",x,&y); /*& means one space*/ /*%s is read character*/ /*%lf is read double decimals*/
  cout<<"finish scanning"<<endl;
  z=y*2.0;
  cout<<x<<" and "<<z<<endl;
  fclose;
    }


