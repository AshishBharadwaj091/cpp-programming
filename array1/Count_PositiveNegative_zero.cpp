#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Size of array";
    cin>>n;
    int arr[n];
    for (int i=0;i<=n-1;i++){
        cin>>arr[i];
    }

    int positive = 0;
    int negative=0;
    int zero =0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            positive++;
        }
        else if(arr[i]<0){
            negative ++;
        }
        else{
            zero++;
        }

    }
    cout<<"Total no of Positive: "<<positive<<endl;
    cout<<"Total no of Negative;"<<negative<<endl;
    cout<<"Total no of zero :"<<zero<<endl;

    return 0;

}