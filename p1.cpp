#include<iostream>
using namespace std;
void update(int& n){
    //   cout<<n++;
    n++;
}

int main(){
int ar[5]={0,1,2,3,9};
// cout<<"the value at first position is "<<ar[0]<<endl;
// cout<<"the value at first position is "<<ar[4]<<endl;
// cout<<"the adress of 1st position of array is "<<ar<<endl;
// cout<<"the adress of 1st position of array is "<<*ar<<endl;
// cout<<"the adress of 1st position of array is "<<&ar[0]<<endl;
// cout<<"the next element of the arr is "<<*ar+4<<endl;
// cout<<"the next element of the arr is "<<*(ar+4)<<endl;
// cout<<"the next element of the arr is "<<(ar+4)<<endl;
// // cout<<"the next element of the arr is "<<&ar[4]<<endl;
// // for(int i=0;i<5;i++){
// //     cout<<i[ar];
// // }
// int arr[4]={2,3,8,1};
// int *ptr=&arr[0];
// // cout<<ptr<<endl;
// // cout<<ptr+1<<endl;
// // cout<<ptr+2<<endl;
// // cout<<ptr+3<<endl;
// // cout<<ptr+4<<endl;
// // cout<<ptr+5<<endl;
// for (int i=0;i<4;i++){
//     cout<<ptr+i<<endl;
// }
// // char ch[7]={'r','i','t','u','r','a','j'};
// // for(int i=0;i<7;i++){
// //     // cout<<ch[i];
// // }
// // cout<<&ch[0]<<en
 int p=9;
 cin>>p;
cout<<"before"<<p<<endl;
update(p);
cout<<"after"<<p<<endl;
// cout<<ans<<endl;




return 0;
}