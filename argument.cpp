#include <iostream>

using namespace std;

class glass{

  int quantity;
public:
  glass();/*no argument function*/
  glass(int y);
  void flow();
};

glass::glass():quantity(11){}
glass::glass(int y):quantity(y){}
void glass::flow(){
  if(quantity>=4){
    cout<<"water flew out."<<endl;
    quantity-=4;
    cout<<"now, the quantity of water is "<<quantity<<"."<<endl;
  }else{
    cout<<"there is no water"<<endl;
      }
}

int main(){
  cout<<"how much water(integer) is there?"<<endl;
  int x;
  cin>>x;
  glass gl(x);
  gl.flow();
  gl.flow();
  gl.flow();
  cout<<"now, the quantity of water is 11."<<endl;
  glass gl2; /*no need to write ().*/
  gl2.flow();
  gl2.flow();
  gl2.flow();
}
