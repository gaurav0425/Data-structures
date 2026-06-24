#include<iostream>
using namespace std;

int main(){
    // int arr[5] = {1,2,3,4,5};
    // int x=4,i;
    // for(i=0;i<5;i++){
    //     if(arr[i]==x){
    //     cout<<i;
    //     return 0;
    //     }
    // }
    // cout<<"Element not found";
    // return 0;

    int arr[5],i,x;
    cout<<"Enter the values in array";
    for(i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element you want to search";
    cin>>x;
    for(i=0;i<5;i++){
        if(arr[i]==x){
            cout<<i;
            return 0;
        }
    }
    cout<<"Element not found";
    return 0;
}