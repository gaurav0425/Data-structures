// #include<iostream>
// using namespace std;

// int main(){
//     // int a = 10;
//     // //print the address of a
//     // cout<<&a<<endl;
//     // int *ptr = &a;
//     // cout<<ptr<<endl;
//     // float m = 2.6;
//     // float *ptr1 = &m;
//     // cout<<ptr1<<endl;

//     // int a = 10;
//     // int b = 30;
//     // int *ptr = &a;
//     // cout<<sizeof(ptr)<<endl;
//     // cout<<ptr<<endl;
//     // cout<<*ptr<<endl;
//     // // a++;
//     // // cout<<*ptr<<endl;
//     // // ptr = &b;
//     // // cout<<*ptr;


//     // int arr[5] = {1,2,3,4,5};
//     // int *ptr = &arr[0];
//     // cout<<ptr<<endl;
//     // cout<<*ptr<<endl;
//     // cout<<arr<<endl;
//     // cout<<arr+0<<endl;
//     // cout<<arr+1<<endl;


//     // //Print address
//     // for(int i=0;i<5;i++){
//     //     cout<<arr+i<<endl;
//     // }


//     // //Print value
//     //  for(int i=0;i<5;i++){
//     //     cout<<*(arr+i)<<endl; 
//     // }


//     // int *ptr = arr;
//     // for(int i=0;i<5;i++){
//     //     cout<<ptr[i]<<endl;
//     // }

//     // int *ptr = arr;
//     // for(int i=0;i<5;i++){
//     //     cout<<*ptr<<endl;
//     //     ptr++;
//     // }

//     // int *ptr = arr;
//     // for(int i=4;i>=0;i--){
//     //     cout<<ptr[i]<<endl;
//     // }

//     //  for(int i=4;i>=0;i--){
//     //     cout<<ptr + i<<endl;
//     // }

//     // int *ptr = arr + 4;
//     //  for(int i=4;i>=0;i--){
//     //     cout<<*ptr<<endl;
//     //     ptr--;
//     // }


//     // int *ptr = arr;
//     // ptr = ptr+2;
//     // cout<<*ptr<<endl;

//     // ptr = ptr-1;
//     // cout<<*ptr;
//     // char arr[5] = {'A','B','C','D','E'};
//     // char *ptr = arr;
//     // cout<<*ptr;

//     // char arr[5] = "1234";
//     // char *ptr = arr;
//     // cout<<arr<<endl;
//     // cout<<ptr<<endl;
//     // cout<<(void*)arr<<endl;
//     //  cout<<(void*)ptr<<endl;

//     char name = 'a';
//     cout<<(void*)&name<<endl;
//     char *ptr1 = &name;
//     cout<<(void*)ptr1;
// }



// #include<iostream>
// using namespace std;

// void incr(int *ptr){
//     *ptr = *ptr + 1;
// }
// int main(){
//     int num = 10;
//     // int temp = num;
//     incr(&num);
//     cout<<num<<endl;
// }


// #include<iostream>
// using namespace std;

// void dob(int *p){
//     for(int i=0;i<5;i++){
//         p[i] = 2*p[i];
//     }
// }

// int main(){
//     int arr[5] = {1,2,3,4,5};
//     dob(arr);

//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<endl;
//     }
// }


    // #include<iostream>
    // using namespace std;

    // void swapping(int *p1,int *p2){
    //     int temp = *p1;
    //     *p1 = *p2;
    //     *p2 = temp;
    // }

    // int main(){
    //     int first = 10;
    //     int second = 20;
    //     swapping(&first,&second);

    //     cout<<first<<endl;
    //     cout<<second<<endl;
    // }

//     #include<iostream>
//     #include<vector>
//     using namespace std;


//     void swapping(int &p1,int &p2){
//         int temp = p1;
//         p1 = p2;
//         p2 = temp;
//     }

//     void pass(vector<int>&v1){
//         for(int i=0;i<5;i++){
//             v1[i] = 10;
//         }
//     }
//     int main(){
//         // int a = 10;
//         // int &temp = a;
//         // temp = temp + 1;
//         // cout<<temp;
//         // int first = 10,second = 20;
//         // swapping(first,second);
//         // cout<<first<<" "<<second;

//         vector<int>v(5,0);
//         pass(v);
//         for(int i=0;i<5;i++){
//             cout<<v[i]<<" ";
//         }
// }


//************* Double pointer *****************

// #include<iostream>
// using namespace std;

// // void display(int *p){
// //     *p = *p + 1;
// // }

// void fun(int **p1){
//     *p1 = *p1 + 1;
// }

// int main(){
//     int n = 10;
//     int *p = &n;
//     int **p1 = &p;
//     // int ***p2 = &p1;
//     // cout<<p<<endl;
//     // cout<<P1<<endl;
//     // cout<<&P1<<endl;
//     // cout<<p2<<endl;

//     //modify the value jo n mai rakhi hai'
//     // **p1 = **p1 + 2;
//     // cout<<n<<endl;
//     // ***p2 = ***p2 + 10;
//     // cout<<n<<endl; 
//     // cout<<**p1;

//     // display(p);
//     // cout<<n;


//     cout<<&n<<endl;
//     cout<<p<<endl;

//     fun(p1);
//     cout<<p;
// }


//  #include<iostream>
//  using namespace std;

// //  void second(int *p1,int *p2){
// //     p1 = p2;
// //     *p1 = 2;
// //  }

//  int main(){
//     // char c[] = "GATE2026";
//     // char *p = c;
//     // cout<<p<<endl;
//     // cout<<p[0]<<endl;
//     // cout<<p + p[3] - p[1];


//     // int i = 0,j=1;
//     // second(&i,&j);
//     // cout<<i<<" "<<j;

//     // int *ptr;
//     // int x = 0;
//     // ptr = &x;
//     // int y = *ptr;
//     // *ptr = 1;
//     // cout<<x<<" "<<y;

//     int a = 5,b = 10;
//     int &name = a;
//     int *ptr = &a;
//     (*ptr)++;
//     ptr = &b;
//     *ptr = *ptr + 5;
//     name+=5;
//     cout<<a<<" "<<b;
//  }


// #include<iostream>
// using namespace std;

// int four(int x,int *py,int **ppz){
//     int y,z;
//     **ppz += 1; z = **ppz;
//     *py+=2; y = *py;
//     x+=3;
//     return x + y + z;
// }

// int main(){
//     int c,*b,**a;
//     c = 4,b = &c,a = &b;
//     cout<<four(c,b,a);
// }

// #include<iostream>
// using namespace std;

// void five(char *str1,char *str2){
//     while((*str1=*str2)){
//         str1++;
//         str2++;
//     }
// }
// int main(){
//     char first[] = "MOHIT";
//     char second[] = "ROHAN";
//     five(first,second);
//     cout<<first;
// }


//3d array

// #include<iostream>
// using namespace std;

// int main(){
//     int l,b,h;
//     cin>>l>>b>>h;

//     int ***ptr = new int**[l];

//     //create 2d array nd 
//     for(int i=0;i<l;i++){
//         ptr[i] = new int *[b];
//         for(int j=0;j<b;j++){
//             ptr[i][j] = new int[h];
//         }
//     }
// } 