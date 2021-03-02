#include <iostream>

using namespace std;

int main(){
    int i,a;
    for(i=0;i<10000;i++){
        cin>>a;
        if(cin.fail()==true){
            break;
        }
        cout<<"Case "<<i<<": "<<a<<endl;
    }
    return 0;
}
