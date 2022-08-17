#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

};
void print(node* &n){
    while(n!=NULL){
        cout<<n->data<<endl;
        n=n->next;
    }
}
void insertAtHead(node* &head,int d){
    node* temp=new node();
    temp->data=d;
    temp->next=head;
    head=temp;
}

void insertAtTail(node* &p,int data){
    node* temp=new node();
    
    temp->data=data;
    temp->next=NULL;
    // tail->next=temp;
    // // temp=tail;
    // tail=temp;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=temp;
    
}

int main(){
    node* head=NULL;
    // node* head=new node();
    // node* head=NULL;
    node* tail=NULL;
    // node* tail=new node();
    // tail->data=78;
    // tail->next=temp;

    // head->data=77;
    // cout<<head->data<<endl;
    insertAtHead(head,66);
    insertAtHead(head,98);
    insertAtTail(tail,69);
    insertAtTail(tail,70);
    print(head);



return 0;
}