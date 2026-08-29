#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

    int even=0;
    int odd =0;
    for(int i=0;i<=n-1;i++){
        if(arr[i]%2==0){
            even +=1;
        }
        else{
            odd +=1;
        }
        
        
    }

    cout<<"no of even no :"<<even<<endl;
    cout<<"no of odd no :"<<odd<<endl;
    return 0;
}