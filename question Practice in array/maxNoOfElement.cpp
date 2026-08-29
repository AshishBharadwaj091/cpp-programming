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
    int max=arr[0];
    for (int i=0;i<n;i++){
        if (arr[i]>max){
            max= arr[i];
        }

    }

    cout<<"The maximum element in the arry is :"<<max;
}