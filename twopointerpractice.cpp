#include<iostream>
using namespace std;

int main(){
    // int arr[6] = {1,0,1,0,1,0};
    // int count0 = 0,count1 = 0;
    // for(int i=0;i<6;i++){
    //     if(arr[i]==0){
    //         count0++;
    //     }else{
    //         count1++;
    //     }
    // }
    // for(int i=0;i<count0;i++){
    //     arr[i]=0;
    //     cout<<arr[i]<<" ";
    // }
    // for(int i=count0;i<6;i++){
    //     arr[i] = 1;
    //     cout<<arr[i]<<" ";
    // }

    // int arr[7] = {1,0,0,1,0,1,1};
    // int start = 0,end = 7;
    // while(start<end){
    //     if(arr[start]==0){
    //         start++;
    //     }else{
    //         if(arr[end]==0){
    //             swap(arr[start],arr[end]);
    //             start++;
    //             end--;
    //         }else{
    //             end--;
    //         }
    //     }
    // }
    // for(int i=0;i<7;i++){
    //     cout<<arr[i]<<" ";
    // }



    // //Two sum
    // int arr[5] = {2,7,11,15,27};
    // int target = 22; 
    // for(int i=0;i<4;i++){
    //     for(int j=i+1;j<5;j++){
    //         if(arr[i]+arr[j]==target){
    //             cout<<arr[i]<<" "<<arr[j];
    //         }
    //     }
    // }


    //two sum using binary search

    // int arr[5] = {2,7,11,15,27};
    // int start = 0,end=5;
    // int target = 22;
    // while(start<end){
    //     if(arr[start] + arr[end]==target){
    //         cout<<arr[start]<<" "<<arr[end];
    //     }else if(arr[start] + arr[end]<target){
    //         start++;
    //     }else{
    //         end--;
    //     }
    // }

    //Pair with given diffrence

    int arr[6] = {2,3,5,10,50,80};
    int diff = 45;
    // for(int i=0;i<5;i++){
    //     for(int j=i+1;j<6;j++){
    //         if(arr[j]-arr[i] == diff){
    //             cout<<arr[i]<<" "<<arr[j];
    //             break;
    //         }
    //     }
    // }
    

    //Using binary search
    int start = 0,end= 1;
    while(start<end){
        if(arr[end]-arr[start]==diff){
            cout<<1;
            break;
        }else if(arr[end]-arr[start]<diff){
            end++;
        }else{
            start++;
        }
    }
}