// #include<iostream>
// using namespace std;
// void func3(int n){
//     if(n == 0){                
//         cout<<"Happy birthday";
//         return;
//     }
//     cout<<n<<" days left for birthday"<<endl;
//     func3(n-1);
// }

// int main(){
//     int n = 5;
//     func3(n);             
// }

//print no. n to 1

// #include<iostream>
// using namespace std;

// void print(int n){
//     if(n==1){
//         return;
//     }
//     cout<<n<<endl;
//     print(n-1);
// }

// int main(){
//     int n;
//     cin>>n;
//     print(n);
// }


//Even numbers
// #include<iostream>
// using namespace std;


// void even(int n){
//     if(n==2){
//         return;
//     }
//     cout<<n<<endl;
//     even(n-2);
// }
// int main(){
//     int n = 10;
//     even(n);
// }


// #include<iostream>
// using namespace std;

// void print(int num,int n){
//     if(num==n){
//         cout<<num;
//         return;
//     }
//     cout<<num<<endl;
//     print(num+1,n);
// }

// int main(){
//     int n;
//     cin>>n;
//     int num=1;
//     print(num,n);
    
// }


// #include<iostream>
// using namespace std;

// void print(int num,int n){
//     if(num==n){
//         cout<<num;
//         return;
//     }

//     cout<<num<<endl;
//     print(num+1,n);
// }
// int main(){
//     int n;
//     cin>>n;
//     print(1,n);
// }

// #include<iostream>
// using namespace std;
// void print(int n){
//     if(n==1){
//         cout<<1<<endl;
//         return ;
//     }
//     print(n-1);
//     cout<<n<<endl;
// }
// int main(){
//     int n;
//     cin>>n;
//     print(n);
// }


// 1 to n even no.

// #include<iostream>
// using namespace std;

// void print(int num,int n){
//     if(num>n){
//         return;
//     }
//     // cout<<num<<endl;
//     print(num+2,n);
//     cout<<num<<endl;
// }

// int main(){
//     int n;
//     cin>>n;
//     print(2,n);

// }


// #include<iostream>
// using namespace std;

// void print(int n){
//     if(n==2){
//         cout<<n<<endl;
//         return;
//     }
//     print(n-2);
//     cout<<n<<endl;
// }

// int main(){
//     int n;
//     cin>>n;
//     if(n%2==1){
//         n--;
//     }
//     print(n);
// }

// #include<iostream>
// using namespace std;

// void print(int n){
//     if(n==1){
//         cout<<n<<endl;
//         return;
//     }
//     print(n-2);
//     cout<<n<<endl;
// }
// int main(){
//     int n;
//     cin>>n;
//     if(n%2==0){
//         n--;
//     }
//     print(n);
// }


// #include<iostream>
// using namespace std;

// int fact(int n){
//     if(n==0){
//         return 1;
//     }
//     return n*fact(n-1);
// }

// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     if(n<0){
//         cout<<"Factorial is not possible";
//         return 0;
//     }
//     cout<<fact(n);
// }



//Sum of first n natural numbers
// #include<iostream>
// using namespace std;


// int sum(int n){
//     if(n==1){
//         return 1;
//     }
//     if(n==0){
//         return 0;
//     }
//     return n + sum(n-1);
// }
// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     if(n<0){
//         cout<<"Sum not possible";
//         return 0;
//         }
//     cout<<sum(n);
// }


//Power of 2
// #include<iostream>
// using namespace std;

// int pow(int num,int n){
//     if(n==0){
//         return 1;
//     }

//     return num*pow(num,n-1);

// }

// int main(){
//     int n;
//     cout<<"Enter the power : ";
//     cin>>n;
//     cout<<pow(2,n);
// }


//sum of square of n numbers

// #include<iostream>
// using namespace std;

// int print(int n){
//     if(n==1)
//     return 1;

//     return n*n + print(n-1);
// }

// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;

//     cout<<print(n);
// }

//print gaurav 10 times using recursion 
// #include<iostream>
// using namespace std;

// void print(int n){
//     if(n==0){
//         return ;
//     }
//     cout<<"Gaurav"<<endl;
//     print(n-1);
// }

// int main(){
//     int n;
//     print(10);
// }


//Print odd no. from n to 1;
// #include<iostream>
// using namespace std;

// void oddno(int n){
//     if(n==1){
//         cout<<1;
//         return;
//     }
//     cout<<n<<endl;
//     oddno(n-2);
// }

// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     if(n%2==0){
//         n--;
//     }
//     oddno(n);
// }


//Print all number from 1 to n using recursion

// #include<iostream>
// using namespace std;

// void print(int n){
//     if(n==1){
//         cout<<1<<endl;
//         return;
//     }
//     print(n-1);
//     cout<<n<<endl;
// }

// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;

//     print(n);
// }

//print all odd no. 1 to n 

// #include<iostream>
// using namespace std;

// void oddno(int n){
//     if(n==1){
//         cout<<1<<endl;
//         return;
//     }
//     oddno(n-2);
//     cout<<n<<endl;
// }

// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     if(n%2==0){
//         n--;
//     }
//     oddno(n);
// }



//print all numbers from 10 to n using recursion where n will be greater than 10

// #include<iostream>
// using namespace std;

// void print(int num,int n){
//     if(n==10){
//         cout<<10<<endl;
//         return ;
//     }
//     print(num,n-1);
//     cout<<n<<endl;
// }

// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     if(n<10){
//         cout<<"Not possible";
//         return 0;
//     }
//     print(10,n);
// }


//Write a Table program using recursion. Take input number n, and print its table. 

// #include<iostream>
// using namespace std;

// void table(int n,int tab){
//     if(tab==0){
//         return ;
//     }
//     table(n,tab-1);
//     cout<<n*tab<<endl;
// }

// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     table(n,10);
// }



// Sum of cubes of N natural numbers using Recursion

// #include<iostream>
// using namespace std;

// int cubesum(int n){
//     if(n==1){
//         return 1;
//     }
//     return n*n*n + (n-1);
// }

// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     cout<<cubesum(n);
// }


//power of 4 

// #include<iostream>
// using namespace std;

// int power(int num,int n){
//     if(n==0){
//         return 1;
//     }
//     return 4*power(4,n-1);
// }

// int main(){
//     int n;
//     cout<<"Enter the power : ";
//     cin>>n;
//     cout<<power(4,n);
// }



//Array in recursion

// #include<iostream>
// using namespace std;

// void printarr(int arr[],int index,int size){
//     if(index==size){
//         return ;
//     }
//      printarr(arr,index+1,size);
//     cout<<arr[index]<<endl;
//     // printarr(arr,index+1,size);
// }

// int main(){
//     int arr[5] = {10,20,30,40,50};

//     printarr(arr,0,5);
// }


// #include<iostream>
// using namespace std;

// void printarr(int arr[],int n){
//     if(n==0){
//         cout<<arr[n]<<endl;
//         return;
//     }
//     printarr(arr,n-1);
//     cout<<arr[n]<<endl;
// }

// int main(){
//     int arr[5] = {10,20,30,40,50};
//     printarr(arr,4);
// }


//Sum of all element


// #include<iostream>
// using namespace std;

// int sum(int arr[],int n){
//     if(n==-1)
//     return 0;

//     return arr[n] + sum(arr,n-1);
// }
// int main(){
//     int arr[] = {1,2,3,4,5};
//     cout<<sum(arr,4);
// }



//find min element in array

// #include<iostream>
// using namespace std;

// int minelement(int arr[],int n){
//     if(n==0)
//     return arr[n];

//     return min(arr[n],minelement(arr,n-1));
    
// }

// int main(){
//     int arr[] = {1,34,5,54,11};
//     cout<<minelement(arr,4);
// }



// Find the Maximum element in a given array of size N

// #include<iostream>
// using namespace std;

// int maxelement(int arr[],int n){
//     if(n==0)
//     return arr[n];

//     return max(arr[n],maxelement(arr,n-1));
// }

// int main(){
//     int arr[] = {10,2,34,56,12};
//     cout<<maxelement(arr,4);

// }




// Find the Product of all elements in a given array of size N

// #include<iostream>
// using namespace std;

// int printmul(int arr[],int n){
//     if(n==0){
//         return arr[0];
//     }

//     return arr[n] * printmul(arr,n-1);
// }

// int main(){
//     int arr[] = {1,2,3,4,5};

//     cout<<printmul(arr,4);
// }




// Find the Number of even elements in a given array of size N

// #include<iostream>
// using namespace std;

// int main(){
    
// }





//*******************Recursion in Strings****************


//Check palindrome

// #include<iostream>
// using namespace std;

// int checkpalindrome(string str,int start,int end){
//     if(start>=end){
//         return 1;
//     }

//     if(str[start]!=str[end]){
//         return 0;
//     }
//     return checkpalindrome(str,start+1,end-1);
    
// }

// int main(){
//     string str = "namman";
//     cout<<checkpalindrome(str,0,str.size()-1);
// }


//Count Vowels



// #include<iostream>
// using namespace std;

// int count(string str,int index){

//     if(index==-1){
//         return 0;
//     }
//     if(str[index]=='a' || str[index]=='e' || str[index]=='i' || str[index]=='o' || str[index]=='u'){
//         return 1 + count(str,index-1);
//     }

//     return count(str,index-1);
// }

// int main(){
//     string str = "gaurav";

//     cout<<count(str,str.size()-1);
// } 



//Reverse a string


// #include<iostream>
// using namespace std;

// void rev(string &str,int start,int end){
//     if(start>=end){
//         return;
//     }

//     char c = str[start];
//     str[start] = str[end];
//     str[end] = c; 

//     rev(str,start+1,end-1);
// }

// int main(){ 
//     string str = "gaurav";
//     rev(str,0,str.size()-1);
//     cout<<str;
// }




//lower case to uppercase
// #include<iostream>
// using namespace std;

// void lowertoupper(string &str,int index){
//     if(index == -1)
//     return;

//     str[index] = 'A' + str[index] - 'a';
//     lowertoupper(str,index-1);
// }

// int main(){
//     string str = "gaurav";
//     lowertoupper(str,str.size()-1);
//     cout<<str;
// }







//**************** Recursion in binary search **************



//Linear search  


// #include<iostream>
// using namespace std;

// bool linearSearch(int arr[],int key,int index,int size){
    
//     if(index==size){
//         return 0;
//     }

//     if(arr[index]==key){
//         return 1;
//     }

//     return linearSearch(arr,key,index+1,size);
// }
// int main(){
//     int arr[] = {2,4,7,3,11,8,2};
//     cout<<linearSearch(arr,8,0,7); 
// }



//Binay search 

// #include<iostream>
// using namespace std;

// bool binarySearch(int arr[],int key,int start,int end){
//     if(start>end){
//         return 0;
//     }
//     int mid = start + (end-start)/2;
//     if(arr[mid]==key){
//         return true;
//     }else if(arr[mid]<key){
//        return binarySearch(arr,key,mid+1,end);
//     }else{
//         return binarySearch(arr,key,start,mid-1);
//     }

// }

// int main(){
//     int arr[] = {2,4,7,8,10,11,23};
//     cout<<binarySearch(arr,8,0,6);
// }



// Given an array in non-increasing order, an element is given X, find if that element is present in the array or not. print 1 if its present else print 0.


// #include<iostream>
// using namespace std;

// bool binarySearch(int arr[],int start,int end,int key){
//     if(start>end){
//         return 0;
//     }
//     int mid = start + (end-start)/2;

//     if(arr[mid]==key){
//         return 1;
//     }else if(arr[mid]>key){
//          return binarySearch(arr,mid+1,end,key);
//     }else{
//         return binarySearch(arr,start,mid-1,key);
//     }
// }

// int main(){
//     int arr[] = {40,30,22,11,4,2};
//     cout<<binarySearch(arr,0,5,4);
// }




//Write a recursive function to reverse the elements of an array.


// #include<iostream>
// using namespace std;

// void reverseElement(int arr[],int start,int end){
//     if(start>end){
//         return ;
//     }

//     int rev = arr[start];
//     arr[start] = arr[end];
//     arr[end] = rev;

//     reverseElement(arr,start+1,end-1);

// }

// int main(){
//     int arr[] = {10,20,30,40,50};

//     reverseElement(arr,0,4);
//      for(int i = 0; i < 5; i++) {
//         cout << arr[i] << " ";
//     }
// }




//Write a recursive function to rotate elements in an array to the right by 1 position.

#include<iostream>
using namespace std;

int main(){
    int arr[] = {10,20,30,40,50};
        
}