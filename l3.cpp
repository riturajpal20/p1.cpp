// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;
//     node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };
// void insertAtHead(node* &head,int d){
//     node* temp=new node(d);
//     temp->next=head;
//     head=temp;
//     }
//     void print(node* &head){
//         node* temp=head;
//         while(temp!=NULL){
//             // temp->next=head;
//             cout<<temp->data<<endl;
//             // temp->next=temp;
//             temp=temp->next;

//         }
//         cout<<endl;

//     }




// int main(){
//     node* node1=new node(20);
//     // cout<<node1->data<<endl;
//     node* head =node1;
//     // print(head);
//     insertAtHead(head,100);
//     insertAtHead(head,200);
//     insertAtHead(head,300);
//     print(head);


// return 0;
// }
// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;
//     node(int data){
//         this->data=data;
//         this->next=NULL;


//     }
// };
// void insertAtTail(node* &tail,int d){
//     node* temp=new node(d);
//     tail->next=temp;
//     tail=temp;


// }
// void insertAtHead(node* &head,int d){
//     node* temp=new node(d);
//     temp->next=head;
//     head=temp;

// }
// void print(node* &head){
//     node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<endl;
//         // temp->next=temp;
//         temp=temp->next;


//     }
//     cout<<endl;
// }

// int main(){
//     node* node1=new node(20);
//     // cout<<node1->data<<endl;
//     node* head=node1;
//     node* tail=node1;
//     insertAtTail(head,200);
//      insertAtTail(head,900);
//      insertAtTail(head,2000);
//      insertAtTail(head,9000);

//     insertAtHead(head,200);
//     insertAtHead(head,300);
//     // print(tail);
//     print (head);

// return 0;
// }
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
void print(node* n){
    while(n!=NULL){
        cout<<n->data<<endl;
        n=n->next;
    }

}
void push(node* &head,int data){
    node* temp=new node();
    temp->data=data;
    temp->next=head;
    head=temp;
}
void pull(node* tail,int data){
    node* temp=new node();
    temp->data=data;
    tail->next=temp;
    temp=tail;

}

int main(){
    node* tail=NULL;
    // node* second =new node();
    // node* third =new node();
    // head->data=3;
    // head->next=second;
    // second->data=6;
    // second->next=third;
    // third->data=8;
    // third->next=NULL;
    // push(head,5);
    // print(head);
 
    
    // push(head,10);
    // print(head);
   

  
    // push(head,50);
    // print(head);
  

  
    // push(head,109);
    //  print(head);
    

   pull(tail,50);
   pull(tail,200);
   pull(tail,45);
print(tail);


return 0;
}