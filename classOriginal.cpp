#include <iostream>
#include <string>

using namespace std;

class dog{
private:
  string pet;
public:
  void bark(string s){
    pet=s;
    cout<<pet<<":I am "<<pet<<"!!"<<endl;
  }

};

int main(){
  cout<<"enter your pet's name."<<endl;
  string name;
  cin>>name;
  dog aa;
  aa.bark(name);
  

}
