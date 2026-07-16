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
    // Node A1(4);

    //Creates dynamically
    Node *Head;
    // Head = new Node(4);

    Head = NULL;

    // cout<<Head->data<<endl;
    // cout<<Head->next<<endl;

    //Insert node at beginning

    int arr[] = {2,4,6,8,10};
    //Linked list doesnt exist

    for(int i=0;i<5;i++){
    if(Head==NULL){
        // Head = new Node(5);
        Head = new Node(arr[i]);
    }
    //Linked list exist
    else{
        Node *temp;
        // temp = new Node(5);
        temp = new Node(arr[i]);
        temp->next = Head;
        Head = temp;
    }
}

//Print the value
Node *temp = Head;
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
}
}