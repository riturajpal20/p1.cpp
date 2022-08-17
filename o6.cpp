#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

void print(Node* &n){
    Node* p=new Node();
    p=n;
while(p!=NULL){
    cout<<p->data<<"  "<<endl;
    p=p->next;

}

}

void insertAtHead(Node * &head,int data){
    Node* temp=new Node();
    temp->data=data;
    temp->next=head;
    head=temp;
}

// void insertAtTail(Node * &head, int data){
//     Node* temp=new Node();
//     temp->data=data;
//     temp->next=NULL;
//     Node* p=new Node();
//     p=head;
//     while(p->next!=NULL){
//         // cout<<p->data<<" ";
//         p=p->next;
        
//     }
//     p->next=temp;
//     }
void insertAtTail(Node* &head,int data){
    Node* temp=new Node();
    temp->data=data;
    temp->next=NULL;
    Node* p=new Node();
    p=head;
    while(p->next!=0){
        p=p->next;
    }
    p->next=temp;

}

int main(){

    Node* head=new Node();
    Node* head1=new Node();
    head->data=2;
    head1->data=3;
    head1->next=NULL;
    head->next=head1;
    insertAtHead(head,34);
    // print(head);
    insertAtTail(head,56);
    print(head);

return 0;
}
