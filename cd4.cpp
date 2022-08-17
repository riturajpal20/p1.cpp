#include<iostream>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int x;
    cin>>x;
    int arr[3];
    for(int i=1;i<=3;i++){
        cin>>arr[i];
    }
    // if(arr[x-1]==0){
    //     cout<<"no"<<endl;
    // }
    //  if(arr[x-1]!=0){
    //     // if(arr[arr[x-1]]==0){
    //     //     cout<<"no"<<endl;
    //     // }
    //    else if(arr[arr[x-1]]!=0){
    //         cout<<"yes"<<endl;
    //     }
    // }
    
    
        if(arr[x]==0 && arr[arr[x]]==0){
        cout<<"no"<<endl;
    }
    // else if(arr[x]!=0){
    //     if(arr[arr[x]]==0){
    //         cout<<"no"<<endl;
    //     }
        else{
            cout<<"yes"<<endl;
        }
    
}


return 0;
}