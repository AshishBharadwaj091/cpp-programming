#include<iostream>
using namespace std;

    void starTringle(int x){
        for(int i=1;i<x;i++){
            for(int j=1;j<x;j++){
                cout<<"*";
            }
            cout<<endl;
        }  
    }

int main(){
    starTringle(1);
    starTringle(5);
    starTringle(6);
}
    
    
    // return 0;
