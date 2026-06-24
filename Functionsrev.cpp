// #include<iostream>

// using namespace std;

// int sum(int a,int b){
//     cout<<a+b;
// }
// int mul(int a,int b){
//     return a*b;
// }

// int main(){
//     sum(2,4);
//     cout<<endl;
//     cout<<mul(6,6);
// }


// #include<iostream>
// using namespace std;

// int prime(int a){
//     if(a<2){
//         cout<<"Not a prime number";
//         return 0;
//     }
//     for(int i=2;i<a;i++){
//         if(a%i==0){
//             cout<<"Not a prime number";
//             return 0;
//         }
//     }
//     cout<<"Prime number";
// }

// int main(){
//     prime(8);
// }

// #include<iostream>
// using namespace std;

// int factorial(int n){
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact = fact*i;
//     }
//     cout<<fact;
// }

// int main(){
//     factorial(5);
// }

// #include<iostream>
// using namespace std;
// void change(int x){
//     x = 20;
// }

// int main(){
//     int a = 70;
//     change(a);
//     cout<<a;
// }



//  #include<iostream>
//  using namespace std;

//  void change(int &x){
// x = 17;
//  }


//  int main(){
//     int a = 67;
//     change(a);
//     cout<<a;
//  }

#include<iostream>
#include<cmath>
using namespace std;

int countdigit(int n){
    int count = 0;
    while(n){
        count++;
        n = n/10;
    }
    return count;
}

bool armstrong(int num,int digit){
    int n = num,ans = 0,rem;
    while(n){
        rem = n%10;
        ans = ans + pow(rem,digit);
        n=n/10;
    }
    if(ans==num){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;

    int digit = countdigit(num);
    cout<<armstrong(num,digit);
}