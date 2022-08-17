#include<iostream>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n,l,r;
    cin>>n>>l>>r;
    int arr[n];
    // for (int i=1;i<=n;i++){
    //     cin>>arr[i];
    //     }
    int x=0;
    int j=l;

    while(j!=r)
   { 
        for (int i=1;i<=n;i++){
            if(arr[i]%i==0){
            x++;
            }

        }
        j+=1;

    }
    if(x>1){
        cout<<"no"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    for (int i=1;i<n;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;

}
return 0;
}