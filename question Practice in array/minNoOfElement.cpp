#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"size of arry";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min=arr[0];
    for (int i=0;i<n;i++){
        if (arr[i]<min){
            min= arr[i];
        }

    }

    cout<<"The minium element in the arry is :"<<min;
}