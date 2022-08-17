#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int data){
    this->data=data;
    // this->next=next;
    }

};
// node(int data, int next){
//     this->data=data;
//     this->next=next
// }

int main(){
    node* node1=new node(10);
    // node* node2=new node(90,NULL);
    cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    // cout<<node2->data<<endl;
    // cout<<node2->next<<endl;

return 0;
}