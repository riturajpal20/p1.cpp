#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n+1];
    for (int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int sum=0;
    int x=0;
    
    for (int i=1;i<=n;i++){
        if((arr[i]==0&&arr[i+1]==1)||(arr[i]==1&&arr[i+1]==0)||(arr[i]==0&&arr[i+1]==0)){
            x++;
            
            // if(arr[i+1]==1)
            // {
            //     sum+=x;
            // }
            // sum+=x+1;
        }
        if(arr[i]==1&&arr[i+1]==1){
            continue;

        }
        // else{
        //     sum+=x+1;
        // }
    }
    int ans=sum+x;
    cout<<ans<<endl;
}
return 0;
}