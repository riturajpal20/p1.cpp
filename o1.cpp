// #include<iostream>
// using namespace std;
// class herro{
//     public:
//     int health;
//     char level;

// };

// int main(){
//     herro h1;
//     h1.health=10;
//     h1.level='r';
//     cout<<h1.health<<" "<<h1.level;
    

// return 0;
// }
// #include<iostream>
// using namespace std;
// class name{
//     public:
//     string name;
//     int age;
//     double cg;
//     int subject;
// };

// int main(){
//     name rituraj;
//     rituraj.name="rituraj pal";
//     rituraj.age=19;
//     rituraj.cg=8.58;
//     rituraj.subject=5;
//     cout<<rituraj.name<<" "<<rituraj.age<<" "<< rituraj.cg<<" "<<rituraj.subject<<" ";



// return 0;
// }
// #include<iostream>
// using namespace std;
// class ll{
//     public:
//     int date;
//     ll* next;
//     ll(int date){
//         this->date=date;
//         this->next=NULL;
//     }

// };

// int main(){
//     ll* list=new ll(12);
//     cout<<list->date<<endl;
//     cout<<list->next<<endl;

// return 0;
// }
// #include<iostream>
// using namespace std;
// class rituraj{
//     public:
//     int data;
//     rituraj* next;
//     rituraj(int data){
//         this->data =data;
//         this->next=NULL;
//     }
// };
// // rituraj* pal=new rituraj(100);
// // cout<<pal->data<<endl;

// int main(){
// rituraj* pal=new rituraj(100);
// cout<<pal->data<<endl;
// cout<<pal->next<<endl;

// return 0;
// }
// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;

// };
// // node* n1=new node();
// // node* n2=new node();
// // node* n3=new node();
// // n1->data=45;
// // n1->next=n2;
// // n2->data=67;
// // n2->next=n3;
// // n3->data=89;
// // n3->next=NULL;
// // while()

// int main(){
//     node* n1=new node();
// node* n2=new node();
// node* n3=new node();
// n1->data=45;
// n1->next=n2;
// n2->data=67;
// n2->next=n3;
// n3->data=89;
// n3->next=NULL;
// while(n1!=NULL){
//     cout<<n1->data<<" ";
//     n1=n1->next;
// }

// return 0;
// }
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
// void insertAthead(node* &head,int d){
//     node* temp=new node(d);
//     temp->next=head;
//     head=temp;

// }
void insertAtposition(node* &head,int position,int d){
    node* temp=new node();
    int x=1;
    while(x<position-1){
        temp=temp->next;
        x++;
    }
    node* nodetoinsert=new node();
    nodetoinsert->next=temp->next;
    // temp->next=nodetoinsert->next;
    temp->next=nodetoinsert;

}

int main(){
    node* head=new node();
    node* second=new node();
    node* third=new node();
    head->data=78;
    head->next=second;
    second->data=100;
    second->next=third;
    third->data=200;
    third->next=NULL;
    // while(head!=NULL){
    //     cout<<head->data<<endl;
    //     head=head->next;
    // }
    // insertAthead(head,10);
    insertAtposition(head,2,22);
    while(head!=NULL){
        cout<<head->data<<endl;
        head=head->next;
    }

return 0;
}