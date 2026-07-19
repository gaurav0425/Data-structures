// #include<iostream>
// using namespace std;

// struct Node{
//     int data;
//     Node *next;

//     Node(int value){
//         data = value;
//         next = NULL;
//     }
// };

// int main(){
//     Node *Head;
//     Head = new Node(4);

//     Head->next = new Node(8);
//     Head->next->next = new Node(25);

//     Node *temp = Head;
//     while(temp!=NULL){
//         cout<<temp->data<<" -> ";
//         temp = temp->next;
//     }
//     cout<<"NULL";

//     // cout<<Head->data<<" -> ";
//     // cout<<Head->next->data<<" ->  ";
//     // cout<<Head->next->next->data<<" -> ";
//     // cout<<"NULL";
// }


//Insert at beginning

// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node *next;

//     Node(int value){
//         data = value;
//         next = NULL;
//     }
// };


// int main(){
//     Node *Head;
//     Head = new Node(5);

//     Head->next = new Node(10);
//     Head->next->next = new Node(25);

//     //Insert at beginning
//     Node *newnode = new Node(2);

//     newnode->next = Head;
//     Head = newnode;

//     Node *temp = Head;
//     while(temp!=NULL){
//         cout<<temp->data<<" -> ";
//         temp = temp->next;
//     }
//     cout<<"NULL";
// }




//Insert at end

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;


    Node(int value){
        data = value;
        next = NULL;
    }
};

int main(){
    Node *Head,*tail;
    Head = NULL;
    tail = NULL;

    int arr[] = {2,4,6,8,10};

   for(int i=0;i<5;i++){
    if(Head==NULL){
        Head = new Node(arr[i]);
        tail = Head;
    }else{
        tail->next = new Node(arr[i]);
        tail = tail->next;
    }
   }
   Node *temp;
   temp = Head;

   while(temp!=NULL){
    cout<<temp->data<<" -> ";
    temp = temp->next;
   }
   cout<<"NULL";
}