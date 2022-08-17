#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
void print(node* &n){
    node* p=new node();
    p=n;
    while(n!=NULL){
        cout<<n->data<<endl;
        n=n->next;
    }

}
void insertAtHead(node* &head,int d){

node* temp=new node();
// node* head=new node();
temp->data=d;

temp->next=head;
head=temp;



}
void insertAtTail(node* &head,int d){
    node* temp=new node();
    temp->data=d;
    temp->next=NULL;
    node* p=new node();
    p=head;
    while(p->next!=0){
        p=p->next;

    }
    p->next=temp;
}
void nodeToInsert(node* &head,int n,int d){
    node* temp=new node();
    temp=head;
    int x=1;
    while(x<n){
        // cout<<temp->data<<" ";
        temp=temp->next;
        x++;
    }
    node* newnode=new node();
    newnode->data=d;
    newnode->next=temp->next;
    temp->next=newnode;
}

int main(){
    node* head=new node();
    
    node* node2=new node();
    node* node3=new node();
    node* node4=new node();
    head->data=9;
    node2->data=12;
    node3->data=45;
    node4->data=67;
    head->next=node2;
    node2->next=node3;
    node3->next=node4;
    node4->next=NULL;
    // print(head);
    // cout<<endl;
    nodeToInsert(head,3,700);
    print(head);
    // node3->data=45;
    
    

    // cout<<head->data<<endl;
    // // cout<<n->next<<endl;
    // cout<<node2->data<<endl;
    // cout<<node2->next<<endl;
    // insertAtHead(head,45);
    // insertAtHead(head,90);

    // insertAtTail(head,87);
    // insertAtTail(head,97);
    // nodeToInsert(head,3,700);
    // print(head);
    // print(tail);


return 0;
}