// #include<iostream>
// using namespace std;

// void print(int n){
//     if(n==0){
//         return;
//     }
//     cout<<"Gaurav"<<endl;
//     print(n-1);

// }

// int main(){
//     print(10);
// }

// Print n to 1

// #include<iostream>
// using namespace std;

// void print(int n){
//     if(n==0){
//         return;
//     }
//     cout<<n<<" ";
//     print(n-1);
// }

// int main(){
//     print(10);
// }

// Print even numbers
// #include <iostream>
// using namespace std;

// void print(int n)
// {
//     if (n == 0)
//     {
//         return;
//     }
//     print(n - 2);
//     cout << n << " ";
// }

// int main()
// {
//     print(20);
// }


//Print 1 to N

// #include<iostream>
// using namespace std;

// void print(int num,int n){
//     if(num==n){
//         cout<<num;
//         return;
//     }
//     cout<<num<<" "; 
//     print(num+1,n);
// }

// int main(){
//     print(1,20);
// }


//Print 1 to n using 1 argument
// #include<iostream>
// using namespace std;

// void print(int n){
//     if(n==0){
//         return;
//     }
//     print(n-1);
//     cout<<n<<" ";
// }

// int main(){
//     print(10);
// }

// 1 to n even number

// #include<iostream>
// using namespace std;

// void print(int n){
//     if(n==0){
//         return;
//     }

//     print(n-2);
//     cout<<n<<" ";
// }

// int main(){
//     int n;
//     cin>>n;
//     if(n%2!=0){
//         n--;
//     }
//     print(n);
// }


// 1 to n odd number
// #include<iostream>
// using namespace std;

// void print(int n){
//     if(n==1){
//         cout<<n<<" ";
//         return;
//     }
//     print(n-2);
//     cout<<n<<" ";
// }

// int main(){
//     int n;
//     cin>>n;
//     if(n%2==0){
//         n--;
//     }
//     print(n);
// }


//factorial
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
//     cin>>n;
//     if(n<0){
//         cout<<"Factorial not possible";
//         return 0;
//     }
//     cout<<fact(n);
// }



//Sum of n number
// #include<iostream>
// using namespace std;

// int sumsq(int n){
//     if(n==1){
//         return 1;
//     }
//     return n + sumsq(n-1);
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<sumsq(n);
// }

//power of 2
#include<iostream>
using namespace std;

int power(int number,int n){
    if(n==0){
        return 1;
    }
    return number * power(number,n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<power(2,n);
}