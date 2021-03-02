#include <iostream>
#include <string>
using namespace std;

class dog
{
  private: /*even if you don't write this, the space on the public becomes private. */
  string name; /*"name" is defined as one of string. */
public:
  dog(string s){ /*function1(dog) is bring string as s. */
    name=s; /*name is treated as s. */
  }
  
  void bark(){ /*function2(bark)*/
    cout<<name<<":"<<"I am "<<name<<"!"<<endl;
  }
};

int main(){
  dog aaaa("hotdog"); /*"dog aaaa" is like "string s". */
  /*From now on, class dog will be used as aaaa and the argument is hotdog. */
  cout<<"your dog was spawn."<<endl;
  aaaa.bark();
}
