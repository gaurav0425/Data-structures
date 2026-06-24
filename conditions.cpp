#include <iostream>

using namespace std;

int main()
{
    // int package;
    // cout<<"Tell me the package : ";
    // cin>>package;

    // if(package>10){
    //     cout<<"Accepted";
    // }else{
    //     cout<<"Rejected";
    // }

    // int marks;
    //  cout<<"Enter ur marks : ";
    //  cin>>marks;
    //  if(marks > 33){
    //     cout<<"Pass";
    //  }else{
    //     cout<<"Fail";
    //  }

    // int a,b;

    // cout<<"Enter ur 1st number : ";
    // cin>>a;

    // cout<<"Enter ur 2nd number : ";
    // cin>>b;

    // if(a>b){
    //     cout<<"Yes";
    // }else{
    //     cout<<"No";
    // }

    // int num;
    // cout<<"Enter a number : ";
    // cin>>num;
    // if(num%2==0){
    //     cout<<"Even number";
    // }else{
    //     cout<<"Odd";
    // }
    // int age;
    // cout<<"Enter your age: ";
    // cin>>age;
    // if(age>18){
    //     cout<<"Adult";
    // }else{
    //     cout<<"Tennager";
    // }

    // int num;
    // cout<<"Enter ur no.";
    // cin>>num;
    // if(num>0){
    //     cout<<"Positive";
    // }
    // else if(num==0){
    //     cout<<0;
    // }else{
    //     cout<<"Negative";
    // }

   int n;
    cout<<"Enter a no. b/w 1 to 6 : ";
    cin>>n;

    if(n==1){
        cout<<"Monday";
    }
    else if(n==2){
        cout<<"Tuesday";
    }
    else if(n==3){
        cout<<"Wednesday";
    }
    else if(n==4){
        cout<<"Thrusday";
    }
    else if(n==5){
        cout<<"Friday";
    }
    else if(n==6){
        cout<<"Saturday";
    } 
    else if(n==7){
        cout<<"Sunday";
    }else{
        cout<<"Enter valid day";
    }
}
