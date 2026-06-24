#include <iostream>
#include <vector>
using namespace std;

int main() {
    // int n = 3;

    // int arr[3][3] = {
    //     {1, 2, 3},
    //     {4, 5, 6},
    //     {7, 8, 9}
    // };

    // for(int d=0;d<=2*(n-1);d++){
    //     for(int i=0;i<n;i++){
    //         int j = d-i;
    //         if(j>=0 && j<n){
    //             cout<<arr[i][j]<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }
    // return 0;

    //Snake pattern
    int arr[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    for(int i=0;i<4;i++){
        if(i%2==0){
            for(int j=0;j<4;j++){
                cout<<arr[i][j]<<" ";
            }
        }else{
            for(int j=3;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}