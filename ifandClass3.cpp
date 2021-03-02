#include <iostream>
//#include <string>

using namespace std;

class rocket{
  int fuel;
  int velocity;
public:
  rocket(int a);
  void acceleration();
};

  rocket::rocket(int a):fuel(a),velocity(0){}
  void rocket::acceleration(){
    if(fuel>=10){
      cout<<"the rocket accelerated!"<<endl;
      fuel-=10;
      cout<<"now fuel is "<<fuel<<"."<<endl;
      velocity+=3;
      cout<<"now velocity is "<<velocity<<"."<<endl;
    }else{
      cout<<"EMERGENCY! there is no fuel!"<<endl;
    }
  }

int main(){
  int b;
  cout<<"how much fuel(integer) do you charge?"<<endl;
  cin>>b;
  cout<<"rocket launched!"<<endl;
  rocket ro(b);
  ro.acceleration();
  ro.acceleration();
  ro.acceleration();
}
