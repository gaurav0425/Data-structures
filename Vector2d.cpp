#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    //Create 2d vector
    // vector<vector<int>>matrix(3,vector<int>(4,1));
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<4;j++){
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<"Rows : "<<matrix.size()<<endl;
    // cout<<"Columns : "<<matrix[0].size();


    //User input
    // int n,m;
    // cout<<"Enter rows nd columns : ";
    // cin>>n>>m;
    // vector<vector<int>>matrix(n,vector<int>(m,2));
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cin>>matrix[i][j];
    //     }
    // }

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


    //Wave form
    // int arr[4][4] = {{3,6,4,2},{7,8,11,15},{9,3,2,1},{17,8,5,9}};
    // for(int j=0;j<4;j++){
    //     if(j%2==0){
    //         for(int i=0;i<4;i++){
    //             cout<<arr[i][j]<<" ";
    //         }
    //     }else{
    //         for(int i=3;i>=0;i--){
    //             cout<<arr[i][j]<<" "; 
    //         }
    //     }
    // }


    //Spiral form
    int arr[6][6] = {
    {1,  2,  3,  4,  5,  6},
    {7,  8,  9, 10, 11, 12},
    {13, 14, 15, 16, 17, 18},
    {19, 20, 21, 22, 23, 24},
    {25, 26, 27, 28, 29, 30},
    {31, 32, 33, 34, 35, 36}
};

int top=0,right = 5,bottom = 5,left=0;


//top
while(top<=bottom && left<=right){
    for(int j=left;j<=right;j++){
        cout<<arr[top][j]<<" ";
    }
    top++;

    //right
    for(int i=top;i<=bottom;i++){
        cout<<arr[i][right]<<" ";
    }
    right--;

    //bottom
    if(top<=bottom){
        for(int j=right;j>=left;j--){
            cout<<arr[bottom][j]<<" ";
        }
        bottom--;
    }
    if(left<=right){
        for(int i=bottom;i>=top;i--){
            cout<<arr[i][left]<<" ";
        }
        left++;
    }
}

}