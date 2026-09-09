#include<iostream>
using namespace std;
int main(){
    int n;cout<<"Enter the no of size :";
    cin>> n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];

    }
    int sum =0;
    for (int i=0;i<n;i++){
        sum =sum +arr[i];
    }
    cout<<"Sum of all element of arry is :"<<sum;
}