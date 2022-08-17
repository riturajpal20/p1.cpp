#include<iostream>
using namespace std;
int first(int arr[],int n,int key){
int start=0;
int end=n-1;
int mid=(start+end)/2;
// int key;
// cin>>key;
int ans=-1;
while(start<=end){
    if(arr[mid]==key){
        ans=mid;
        
    }
    else if(key>arr[mid]){
        start=mid+1;
    }
    else if(key<arr[mid]){
        end=mid-1;
    }
    mid=(start+end)/2;
}
// else{
//     cout<<"-1"<<endl;
// }
return ans;

}

int main(){
int n;
cin>>n;
int arr[n];
for (int i=0;i<n;i++){
    cin>>arr[i];
}
// int start=0;
// int end=n-1;
// int mid=(start+end)/2;
 int key;
 cin>>key;
// while(start<=end){
//     if(arr[mid]==key){
//         cout<<mid<<endl;
//     }
//     else if(key>arr[mid]){
//         start=mid+1;
//     }
//     else if(key<arr[mid]){
//         end=mid-1;
//     }
//     mid=(start+end)/2;
// }
// else{
//     cout<<"-1"<<endl;
// }
int x=first(arr,n,key);
int y=last(arr,n,key);
cout<<"frequency of occurenece of the given key is "<<(y-x)+1;


return 0;
}
// always remember O(logn) is much better than O(n);
// so we shld use binary search instead of linear search; 