#include <iostream>

using namespace std;

int main(){
    int n,i,max,min,sum=0;
    cin>>n;
    int a;
    for(i=0;i<n;i++){
        cin>>a;
        if(i==0){
            max=a;
            min=a;
        }
        if(i>=1){
            if(a>max){
                max=a;
            }
            if(a<min){
                min=a;
            }
        }
        sum+=a;
    }
    cout<<min<<" "<<max<<" "<<sum<<endl;
    return 0;
}
