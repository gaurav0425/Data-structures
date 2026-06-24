#include<iostream>
using namespace std;

int main(){
    int arr[6];

    cout<<"Enter 6 values in array: ";
    for(int i=0;i<6;i++){
        cin>>arr[i];
    }

    int last = arr[5];

    for(int i=4;i>=0;i--){
        arr[i+1] = arr[i];
    }

    arr[0] = last;

    cout<<"\nArray after rotation: ";
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

    cout<<"\nProgram Finished\n";

    return 0;
}
