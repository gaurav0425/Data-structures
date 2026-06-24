#include<iostream>
using namespace std;
int main(){
    int n,arr[1000];
    int key;
    cout<<"Enter the size of an array : ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element u want to search : ";
    cin>>key;
    int start=0;
    int end=n-1;
    int found = 0;
    while(start<=end){
        int mid = (start + end)/2;
        if(arr[mid]==key){
              cout<<"Got the element "<<arr[mid];
              found = 1;
              break;
        }else if(arr[mid]<key){
            start = mid + 1;
        }else{
            end = mid-1;
        }
    }
    if(!found){
        cout<<"Element not found";
    }
}