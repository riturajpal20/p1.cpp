// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // class node{
// // //     public:
// // //     int data;
// // //     node* next;

// // // };
// // // int finddata(node* &head)
// // // {
// // //     node* temp=head;
// // //     int x=0;
// // //     while(temp!=NULL){
// // //         temp=temp->next;
// // //         x++;
// // //     }
// // //     int n=1;
// // //     if(x%2==0){
// // //         while(n!=x/2){
// // //             temp=temp->next;
// // //             n++;
// // //         }
// // //         return temp->data;
// // //         cout<<temp->data;

// // //     }
// // //     else if(x%2!=0){
// // //         while(n!=(x+1)/2){
// // //             temp=temp->next;
// // //             n++;
// // //         }
// // //         return temp->data;
// // //         cout<<temp->data;
// // //     }

// // // else {
// // //     return -1;
// // //     cout<<-1;
// // // }
    
    
// // // }

// // // int main(){
// // // node* head=new node();
// // // node* head1=new node();
// // // node* head2=new node();
// // // node* head3=new node();
// // // head->data=76;
// // // head->next=head1;
// // // head1->data=98;
// // // head1->next=head2;
// // // head2->data=90;
// // // head2->next=head3;
// // // head3->data=77;
// // // head3->next=NULL;
// // // cout<<finddata(head);



// // // return 0;
// // // }
#include<bits/stdc++.h>
using namespace std;

int main(){
int t; cin>>t;
while(t--){
   int n;
   cin>>n;
  int arr[n];
  for (int i=0;i<n;i++){cin>>arr[i];}
       // cin>>arr[i];
    unordered_map<int , int > um;
    int freq;
    int x;
    for(int i=n-1;i>=0;i--){
        um[arr[i]]++;
         freq=um[arr[i]];
         if(freq==1){ x=i;}
        //  x=i;
        if(freq>1){
            break;
        }
   }
   if(x==0){       
      cout<<0<<endl;
    }
    else
    cout<<x<<endl;
    


}
return 0;
}
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// int t;
// cin>>t;
// while(t--){
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i=1;i<=n;i++){
//         cin>>arr[i];
//     }
//     int x=0;
//     int y;

//     for (int i=n-1;i>=0;i--){
//         if(arr[i]==0){
//              x=i;

//         break;

//         }


//         // x=i;
//         // break;

//     }
//     for (int i=1;i<n;i++){
//         if(arr[i]==0)
//         {
//         y=i;
//         break;
//         }

//     }
//     if(x==0){
//         cout<<"0"<<endl;
//     }
//     if(x!=0){
//         cout<<(x-y)+2<<endl;
//     }

//     // cout<<(x-y)+2<<endl;
// }
// return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// // int n;
// // cin>>n;
// // int numdigit=(int)log10(n);
// // int firstdigit=(int)(n/pow(n,numdigit));
// // cout<<firstdigit;
// string s;
// cin>>s;

// cout<<s[0];


// return 0;
// }