#include<iostream>
using namespace std;
#include <climits>

int main(){
    // int arr[10];
    // for(int i = 0;i<10;i++){
    //     cin>>arr[i];
    // }
    // for(int i = 0;i<10;i++){
    //     cout<<arr[i]<<" ";
    // }

    // int arr[5] = {10,20,30,40,50};
    // cout<<sizeof(arr)<<endl;  
    // int arr[5] = {10,20,30,40,6};
    // int ans = INT_MAX;
    // for(int i=0;i<5;i++){
    //     if(arr[i]<ans)
    //     ans= arr[i];
    // }
    // cout<<ans;
    // return 0;

    // int arr[5] = {10,20,6,40,50};
    // int ans = INT_MIN;
    // for(int i=0;i<5;i++){
    //     if(arr[i]>ans)
    //     ans = arr[i];
    // }
    // cout<<ans<<endl;
    // return 0;

    int arr[5],n;
    int sum = 0;
    cout<<"Enter number of elements : ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum = sum + arr[i];
    }
    cout<<sum;
}