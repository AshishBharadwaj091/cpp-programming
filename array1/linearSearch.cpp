#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of element you want in arry";
    cin>>n;
    int arr[n];
    
    for(int i=0;i<=n-1;i++){
        cin>> arr[i];

    }

    int x;
    cout<<"Enter the no which you want to search:";
    cin>> x;
    for(int i= 0;i<=n-1;i++){
        if(arr[i]==x);
        //  cout<<"present";
       
    }
     cout<<"present";
        
       
}