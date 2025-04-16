#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(){
        this->data=0;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void insertAthead(Node* &head,int data){
    //step1:create a new node 
    Node* newNode=new Node(data);
    //step2:point the new node to the head of the previous node
    newNode->next=head;
    //step3:now head is pointed to the newNode
    head=newNode;
}


int main(){

    Node* head=NULL;
    insertAthead(head,20);
    insertAthead(head,30);
    insertAthead(head,40);
    insertAthead(head,50);
    print(head);
    // Node* sec= new Node(20);
    // Node* third=new Node(30);
    // Node* forth=new Node(40);
    // Node* fifth=new Node(60);

    // first->next=sec;
    // sec->next=third;
    // third->next=forth;
    // forth->next=fifth;
    // print(first);

return 0;
}