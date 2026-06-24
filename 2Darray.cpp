#include<iostream>
using namespace std;

// void printcolmajor(int arr[][4],int row,int col){
//     //column wise
//     for(int j=0;j<col;j++){
//         for(int i = 0;i<row;i++){
//             cout<<arr[i][j]<<" ";
//         }
//     }
// }
int main(){
    //Create 2d array
    // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    //print all the values in array row wise
    // for(int row = 0;row<3;row++){
    //     for(int col=0;col<4;col++){
    //         cout<<arr[row][col]<<" ";
    //     }
    // }
    
    //Print all the value in arr col wise, function call
    // printcolmajor(arr,3,4);
    
    //Find the element in array
    // int x = 7;

    // for(int row = 0;row<3;row++){
    //     for(int col = 0;col<4;col++){
    //         if(arr[row][col] == x){
    //         cout<<"Yes";
    //         return 0;
    //         }
    //     }
    // }
    // cout<<"NO";

    // int arr[5][4] = {{3,4,7,18},{2,8,3,9},{7,3,0,8},{2,8,9,1},{5,4,2,2}};

    // int sum = INT8_MIN,index = -1;

    // for(int i=0;i<5;i++){
    //     int total  = 0;
    //     for(int j=0;j<4;j++){
    //         total += arr[i][j];
    //     }
    //     if(sum<total){
    //         sum = total;
    //         index=i;
    //     }
    // }
    // cout<<sum<<endl;
    // cout<<index;

    // int arr[4][4] = {{5,8,3,9},{6,2,8,4},{5,3,2,2},{2,8,1,9}};
    // int first = 0,second = 0;
    // for(int i=0;i<4;i++){
    //     first+=arr[i][i];
    // }
    // int i=0,j=3;
    // while(j>=0){
    //     second+=arr[i][j];
    //     i++;
    //     j--;
    // }
    // cout<<first<<endl;
    // cout<<second;

    // int arr[4][4] = {{5,8,3,9},{6,2,8,4},{5,3,2,2},{2,8,1,9}};

    // for(int i=0;i<4;i++){
    //     int start = 0 ,end = 3;
    //     while(start<end){
    //         swap(arr[i][start],arr[i][end]);
    //         start++;
    //         end--;
    //     }
    // }
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<4;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


    //Practice questions 

    // int arr[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    // int first=0,second = 0,third = 0,fourth = 0;

    // for(int i=0;i<4;i++){
    //     int j = 0;
    //     first += arr[i][j];
    // }

    // for(int i=0;i<4;i++){
    //     int j = 1;
    //     second += arr[i][j];
    // }
    // for(int i=0;i<4;i++){
    //     int j=2;
    //     third += arr[i][j];
    // }
    // for(int i=0;i<4;i++){
    //     int j = 3;
    //     fourth += arr[i][j];
    // }

    // cout<<first<<endl;
    // cout<<second<<endl;
    // cout<<third<<endl;
    // cout<<fourth<<endl;
    // for(int j=0;j<4;j++){
    //     int sum = 0;
    //     for(int i=0;i<4;i++){
    //         sum+=arr[i][j];
    //     }
    //     cout<<sum<<endl;
    // }



    // int arr1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    // int arr2[3][3] = {{10,11,12},{13,14,15},{16,17,18}};
    // int ans[3][3];

    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         ans[i][j] = arr2[i][j] - arr1[i][j];
    //     }
    // }
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<ans[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


    // int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    // int first = 0,second = 0;
    // for(int i=0;i<3;i++){
    //     first += arr[i][i];
    // }
    // int j=2;
    // for(int i=0;i<3;i++){
    //     second+=arr[i][j];
    //     j--;
    // }
    // int sum = first + second -arr[1][1];
    // cout<<sum;



    // int arr[3][3] = {{1,4,5},{12,3,4},{78,67,12}};

    // int largest = INT8_MIN;
    // for(int i = 0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         if(arr[i][j]>largest){
    //             largest = arr[i][j];
    //         }
    //     }
    // }
    // cout<<largest;

    //  int arr[3][3] = {{1,4,5},{12,3,4},{78,67,12}};
    //  int smallest= INT8_MAX;
    //  for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         if(smallest>arr[i][j]){
    //             smallest = arr[i][j];
    //         }
    //     }
    //  }
    //  cout<<smallest;


    // int arr[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    // for(int i=0;i<4;i++){
    //     for(int j=0;j<4;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // //Transpose 
    // for(int i=0;i<4;i++){
    //     for(int j=i+1;j<4;j++){
    //         swap(arr[i][j],arr[j][i]);
    //     }
    // }

    // for(int i = 0;i<4;i++){
    //     int start = 0,end = 3;
    //     while(start<end){
    //         swap(arr[i][start],arr[i][end]);
    //         start++;
    //         end--;
    //     }
    // }
    // cout<<endl;
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<4;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
 
    


    //Questions


    // int arr[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    // for(int i=0;i<4;i++){
    //     for(int j=i+1;j<4;j++){
    //         swap(arr[i][j],arr[j][i]);
    //     }
    // }

    // for(int i=0;i<4;i++){
    //     for(int j=0;j<4;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


    // int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    // for(int i=0;i<3;i++){
    //     int start=0,end=2;
    //     while(start<end){
    //         swap(arr[start][i],arr[end][i]);
    //         start++;
    //         end--;
    //     }
    // }
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<arr[i][j]<<" ";
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
//     int arr[6][6] = {
//     {1,  2,  3,  4,  5,  6},
//     {7,  8,  9, 10, 11, 12},
//     {13, 14, 15, 16, 17, 18},
//     {19, 20, 21, 22, 23, 24},
//     {25, 26, 27, 28, 29, 30},
//     {31, 32, 33, 34, 35, 36}
// };

// int top=0,right = 5,bottom = 5,left=0;


// //top
// while(top<=bottom && left<=right){
//     for(int j=left;j<=right;j++){
//         cout<<arr[top][j]<<" ";
//     }
//     top++;

//     //right
//     for(int i=top;i<=bottom;i++){
//         cout<<arr[i][right]<<" ";
//     }
//     right--;

//     //bottom
//     if(top<=bottom){
//         for(int j=right;j>=left;j--){
//             cout<<arr[bottom][j]<<" ";
//         }
//         bottom--;
//     }
//     if(left<=right){
//         for(int i=bottom;i>=top;i--){
//             cout<<arr[i][left]<<" ";
//         }
//         left++;
//     }
// }





}