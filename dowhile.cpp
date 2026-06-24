#include<iostream>

using namespace std;
int main(){
    // int i=1;
    // do{
    //     cout<<i<<" ";
    //     i++;
    // }while(i<=5);
    // int n;
    // cout<<"Enter the number : ";
    // cin>>n;
    // int sum = 0;
    // int i = 1;
    // do{
    //     sum = sum + i;
    //     cout<<sum;
    //     i++;
    // }while(i<=n);

    // int i;
    // for(i=1;i<=10;i++){  
    //    if(i%4==0){
    //     continue;
    //    }
    //     cout<<i<<" ";
    // }

    // int i;
    // cout<<"Enter a number : ";
    // cin>>i;

    // switch(i){
    //     case 1:
    //     cout<<"gaurav";
    //     break;

    //     case 2:
    //     cout<<"Nick";
    //     break;

    //     case 3:
    //     cout<<"Harsh";
    //     break;

    //     default:
    //     cout<<"No one";
    // }

    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            cout<<i<<" ";
        }
    }
}