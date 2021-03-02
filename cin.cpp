#include <iostream>
#include <string> /*the information about the string*/
using namespace std;

int main(){
  cout<<"what's your name?"<<endl;
  string a; /*define a (string is character) */
  cin>>a; /*cin is console input(=keyboard)*/
  cout<<a<<"! welcome to c++!"<<endl;

  cout<<a<<",how old are you?"<<endl;
  int b; /*int is integer*/
  cin>>b;
  cout<<"great! after 20 yr, you will be "<<b+20<<" yr!"<<endl;

}
