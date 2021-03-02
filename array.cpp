#include <iostream>

using namespace std;

int main(){
    int k,i,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(k=n-1;k>=0;k--){
        cout<<a[k];
        if(k!=0) cout<<" ";
    }
    cout<<endl;
    
    return 0;
}
