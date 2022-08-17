// // #include<bits/stdc++.h>
// // using namespace std;

// // int main(){
// // long long int t;
// // cin>>t;
// // while(t--){
// //     // long long int sum=0;
   
// //     long long int l,r,a;
// //     cin>>l>>r>>a;
// //     // for(long long int i=l;i<=r;i++){
// //     //     x=i/a+ i%a;
      
        
// //     //     sum=max(sum,x);
        
// //     // }
// //     // cout<<sum<<endl;
// //     if(l/a==r/a){
// //         cout<<r/a+r%a<<endl;
// //     }
// //     else{
// //         cout<<max(r%a+r/a,r/a-1+a-1)<<endl;
// //     }
// // }
// // return 0;
// // }
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int p=pow(2,n);
//         // int arr[p];
//         // // cout<<p;
//         // for(int i=1;i<=p;i++){
//         //     arr[i]=i;
//         // }
//         cout<<p-1<<endl;
//     }

// return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<arr[n-1]+arr[n-2]<<endl;
}
return 0;
}