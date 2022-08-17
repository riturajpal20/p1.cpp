#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
void print (node* &head){
    node* n=new node();
    n=head;
    while(n!=NULL){
        cout<<n->data<<endl;
        n=n->next;

    }

}
void insertAtHead(node* &head,int d){
    node* temp=new node();
    // head=temp;

    temp->data=d;
    temp->next=head;
    head=temp;

    // head=temp;

}
void insertAtTail(node* &head,int d){
    node* temp=new node();
    temp->data=d;
    temp->next=NULL;
    node* p=new node();
    p=head;
    while(p->next!=NULL){
        p=p->next;

    }
    // node* temp=new node();
    p->next=temp;
    // temp->data=d;
    // // temp->next=N// ULL;
}
void insertAtAnyposition(node* &head,int n,int d){
    node* q=new node();
    q=head;
    int x=1;
    while(x<n-1){
        q=q->next;
        x++;
    }
    node* node1=new node();
    node1->data=d;
    node1->next=q->next;
    q->next=node1;

}
int main(){
    node* head=new node();
    node* second=new node();
    node* third =new node();
    node* fourth=new node();
    node* fifth =new node();
    node* sixth =new node();
    head->data=78;
    head->next=second;
    second->data=87;
    second->next=third;
    third->data=56;
    third->next=fourth;
    fourth->data=54;
    fourth->next=fifth;
    fifth->data=98;
    fifth->next=sixth;
    sixth->data=43;
    sixth->next=NULL;
    // print(head);
    // insertAtHead(head,67);
    insertAtAnyposition(head,5,83);
//    insertAtTail(head,42);
//    insertAtAnyposition(head,4,83);
   print(head);



return 0;
}