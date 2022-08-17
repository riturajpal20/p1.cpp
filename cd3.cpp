#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for (int i=1;i<=n;i++){
     arr[i]=i;
    }
    // for (int i=1;i<=n;i++){
    //     cout<<arr[i];
    // }
    if(n==1){
        cout<<"1"<<endl;
    }
    else
    {if(n%2==0)
    {
        for(int i=1;i<=n;i++){
        swap(arr[i],arr[i+1]);
        i++;
        // if(i==n){
        //     swap(arr[n],arr[n-1]);
        // }
        }
    }
    else
    {
        for(int i=1;i<=n;i+=2){
            if(i==n){
            swap(arr[i-1],arr[i]);
         }
         if(i!=n)
            {swap(arr[i],arr[i+1]);}
        // swap(arr[2],arr[n]);
            // i++;
        //  if(i==n){
        //     swap(arr[i-1],arr[i]);
        //  }
         
    
        }

    }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" "<<endl;
    }
    }
}
return 0;
}