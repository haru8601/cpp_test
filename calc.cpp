#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int a,b,d,r;
    double a2,b2,f;
    cin>>a>>b;
    a2=a;
    b2=b;
    d=a/b;
    r=a-d*b;
    f=(double)a/b;
    cout<<d<<" "<<r<<" "<<fixed<<setprecision(5)<<f<<endl;
    return 0;
}
