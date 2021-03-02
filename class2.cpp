#include <iostream>
#include <string>

using namespace std;

class bird{

  string name;
  
public:
  bird(string s);
  void twitter()const;  /*const is not to change the data of the function even if the do this function. */

};

bird::bird(string s):name(s){}

void bird::twitter()const{
  cout<<name<<": I am a bird. My name is "<<name<<"."<<endl;
}

int main(){
  cout<<"what's the bird's name?"<<endl;
  string a;
  cin>>a;
  bird aa(a);
  aa.twitter();
}
