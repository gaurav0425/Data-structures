// #include<iostream>
// using namespace std;

// int main(){
//     //allocate heap memory for variable
//     int *ptr = new int;
//     *ptr = 5;  //value assign
//     cout<<ptr<<endl;
//     cout<<*ptr<<endl;

//     float *ptr2 = new float;
//     *ptr2 = 3.6;
//     cout<<*ptr2<<endl;

//     int n;
//     cout<<"Enter the size of an array : ";
//     cin>>n;
//     int *p = new int[n];

//     //value insert
//     for(int i = 0;i<n;i++){
//         p[i] = i + 1;
//         // cin>>p[i];
//     }

//      for(int i = 0;i<n;i++){
//         cout<<p[i]<<endl;
//     }

//     delete ptr;
//     delete ptr2;
//     delete[] p;
// }



#include<iostream>
using namespace std;
int main(){
    // Array create that store address
    int n,m;
    cout<<"Enter no. of rows nd no. of columns : ";
    cin>>n>>m; //n rows m column
    int **ptr  = new int *[n];

    //created 2d array
    for(int i=0;i<n;i++){
        ptr[i] = new int[m];
    }

    //taking input
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>ptr[i][j];
        }
    }


    //print the value
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ptr[i][j]<<" ";
        }
        cout<<endl;
    }

    //Release the memory  from heap
    for(int i=0;i<n;i++){
        delete[] ptr[i];
    }
    delete[] ptr;

}