#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int k;
cin>>k;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int x;
int y;
for (int i=0;i<n;i++){
    
    for(int j=i+1;j<n;j++){
        
        if(arr[i]+arr[j]==k){
            x=i;
            y=j;
            break;
        }
    }

    

}
cout<<x<<" "<<y;
return 0;
}