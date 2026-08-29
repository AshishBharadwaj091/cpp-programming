#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;

    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int sum =0;int i;
    for(i=0;i<=n-1;i++){
        sum =sum+arr[i];
    }
    cout<<"the sum aof all element of arry is:"<<sum <<endl;

}