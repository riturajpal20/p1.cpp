#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
void insertingvalue(node* &head,int d){
    node* temp =new node(d);
    temp->next=head;
    head=temp;

}
void printing(node* &head){
    node* temp=head;
    cout<<temp->data<<endl;
    while(temp!=NULL){
        temp=temp->next;

    }


}

int main(){
    node* head=new node();
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    //we are getting garbage value of both node1->data and node->next because we not assign any value to these variable 
    //now assigning the particular value 
    head->data=23;
    head->next=NULL;
    cout<<head->data<<endl;
    cout<<head->next<<endl;
    insertingvalue(head,28);
    printing(head);

return 0;
}