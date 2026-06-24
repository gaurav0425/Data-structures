#include<iostream>
using namespace std;

int main(){
    int arr[1000];
    int n;

    cout<<"Enter the size of an array: ";
    cin>>n;

    cout<<"Enter the elements of an array: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    // Descending Bubble Sort
    for(int i = n-1; i > 0; i--){
        bool swapped = false;

        for(int j = 0; j < i; j++){
            if(arr[j] < arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }

        if(!swapped){
            break;
        }
    }

    cout<<"Sorted array in descending order: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}