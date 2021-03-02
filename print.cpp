#include <iostream>

using namespace std;

int main(){
    int H,W;
    int i,k,l;
    
    while(1){
        cin>>H>>W;
        for(i=0;i<H;i++){
            for(k=0;k<W;k++){
                cout<<"#";
            }
	    cout<<endl;
        }
        if(H==0&&W==0) break;
	cout<<endl;
    }

    return 0;
}
