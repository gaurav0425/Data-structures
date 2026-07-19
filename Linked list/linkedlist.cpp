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
//     // Node A1(4);

//     //Creates dynamically
//     Node *Head;
//     // Head = new Node(4);

//     Head = NULL;

//     // cout<<Head->data<<endl;
//     // cout<<Head->next<<endl;

//     //Insert node at beginning

//     int arr[] = {2,4,6,8,10};
//     //Linked list doesnt exist

//     for(int i=0;i<5;i++){
//     if(Head==NULL){
//         // Head = new Node(5);
//         Head = new Node(arr[i]);
//     }
//     //Linked list exist
//     else{
//         Node *temp;
//         // temp = new Node(5);
//         temp = new Node(arr[i]);
//         temp->next = Head;
//         Head = temp;
//     }
// }

// //Print the value
// Node *temp = Head;
// while(temp!=NULL){
//     cout<<temp->data<<" ";
//     temp=temp->next;
// }
// }





// Insert node at end

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int value)
//     {
//         data = value;
//         next = NULL;
//     }
// };

// int main()
// {
//     Node *Head, *tail;
//     tail = NULL;
//     Head = NULL;

//     int arr[] = {2, 4, 6, 8, 10};

//     for (int i = 0; i < 5; i++)
//     {

//         // linked list is empty
//         if (Head == NULL)
//         {
//             Head = new Node(arr[i]);
//             tail = Head;
//         }
//         // linked list exist
//         else
//         {
//             tail->next= new Node(arr[i]);
//             tail = tail->next;
//         }
//     }

//     Node *temp;
//     temp = Head;

//     while(temp!=NULL){
//         cout<<temp->data<<" -> ";
//         temp = temp->next;
//     }
//     cout<<"NULL";
// }






//Create Llinked list using recursion place node at end

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

// Node* CreateLinkedList(int arr[],int index,int size){
//     //Base case
//     if(index==size){
//         return NULL;
//     }

//     Node *temp;
//     temp = new Node(arr[index]);
//     temp->next = CreateLinkedList(arr,index + 1,size);

//     return temp;
// }

// int main(){
//     Node *Head;
//     Head = NULL;

//     int arr[] = {2,4,6,8,10};

//    Head = CreateLinkedList(arr,0,5);

//    Node *temp;
//    temp = Head;

//    while(temp !=NULL){
//     cout<<temp->data<<" -> ";
//     temp = temp->next;
//    }
//    cout<<"NULL";
// }





//Insert at beginning using recursion


#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int value){
        data= value;
        next = NULL;
    }
};

Node *CreateLinkedList(int arr[],int index,int size,Node *prev){
    //Base case
    if(index==size){
        return prev;
    }

    Node *temp;
    temp = new Node(arr[index]);
    temp->next = prev;

    return CreateLinkedList(arr,index+1,size,temp);
}


int main(){
    Node *Head;
    Head = NULL;

    int arr[] = {2,4,6,8,10};

   Head = CreateLinkedList(arr,0,5,Head);

    //Print
    Node *temp ;
    temp = Head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }

    cout<<"NULL";
}