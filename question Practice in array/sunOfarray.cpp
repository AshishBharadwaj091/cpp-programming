#include<iostream>
using namespace std;
int main(){
    int n;          //n ko inisilation kiya=e hai yaha pe 
    cin>>n;         //an no ko input liye hai
    
    int arr[n];     //array ko banaye hai aur iniselize bhi kiye hai
    for(int i=0;i<n;i++){               //loop lagake jo bhi output aatya yus ko cin use karke input kiy ehai 
        cin>>arr[i];
        

    }
    int sum =0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<sum;
        


}