
// //SELECTION SORT


// // #include<iostream>
// // using namespace std;

// int main(){
//     int arr[6] = {30,50,40,10,60,20};
//     for(int i=0;i<5;i++){
//         int index = i;
//         for(int j = i+1;j<6;j++){
//             if(arr[j]<arr[index]){
//                 index = j;
//             }
//         }
//         swap(arr[i],arr[index]);
//     }
//     for(int i=0;i<6;i++){
//         cout<<arr[i]<<" ";
//     }
//     int n,arr[1000];
//     cout<<"Enter the size of an array : \n";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         int index = i;
//         for(int j=i+1;j<=6;j++){
//             if(arr[j]<arr[index]){
//                 index = j;
//             }
//         }
//         swap(arr[i],arr[index]);
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// //question of selection sort

// // #include<iostream>
// // using namespace std;

// // int main(){
// //     int arr[5] = {10,4,3,2,8};
// //     for(int i=0;i<6;i++){
// //         int index = i;
// //         for(int j=i+1;j<6;j++){
// //             if(arr[j]<arr[index]){
// //                 index = j;
// //             }
// //         }
// //         swap(arr[i],arr[index]);
// //     }
// //     for(int i=0;i<5;i++){
// //         cout<<arr[i]<<" ";
// //     }
// // }


// //Bubble sort

// // #include<iostream>
// // using namespace std;

// // int main(){
// //     int arr[5] = {10,40,20,50,30};
// //     for(int i=3;i>=0;i--){
// //         for(int j=0;j<=i;j++){
// //             if(arr[j]>arr[j+1]){
// //                 swap(arr[j],arr[j+1]);
// //             }
// //         }
// //     }
// //     for(int i=0;i<5;i++){
// //         cout<<arr[i]<<" ";
// //     }
// // }


// //User input
// #include<iostream>
// using namespace std;

// int main(){
//     int n,arr[1000];
//     cout<<"enter the size of array : ";
//     cin>>n;
//     cout<<"Enter the elements in array : ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=n-1;i>=0;i--){
//         for(int j=0;j<=i;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

// }
