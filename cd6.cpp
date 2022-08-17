#include<iostream>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    // int x;
    // cin>>x
    // cout<<x<<" ";
    // int n;
    // cin>>n;
    // for (int i=2;i<=n;i++){
    //     int y;
    //     cin>>y;
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){

        cin>>arr[i];
    }
    int x=0;
    for (int i=1;i<n;i++){
        if(arr[i]%arr[0]==0){
            x++;

        }
    }
    if(x==(n-1)){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }


    
    
   

}
return 0;
}