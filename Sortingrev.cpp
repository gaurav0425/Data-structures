#include<iostream>
using namespace std;

int main(){
    // int arr[6] = {10,30,20,50,5,6};    
    // for(int i=0;i<5;i++){
    //     int index = i;
    //     for(int j=i+1;j<6;j++){
    //         if(arr[j]<arr[index]){
    //             index=j;
    //         }
    //     }
    //     swap(arr[i],arr[index]);
    // }
    // for(int i=0;i<6;i++){
    //     cout<<arr[i]<<" ";
    // }

    // int arr[5] = {20,10,5,60,30};
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<4;j++){
    //         if(arr[j]>arr[j+1]){
    //             swap(arr[j],arr[j+1]);
    //         }
    //     }
    // }
    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }

    int n,arr[1000];
    cout<<"Enter the size of an array : ";
    cin>>n;

    cout<<"Enter the elements in the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }else{
                break;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}