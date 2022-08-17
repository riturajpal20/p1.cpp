#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"enter the value of n"<<endl;
int n ;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];

}
// int max= INT_MIN;
// for(int i=0;i<n;i++){
//     if(a[i]>max){
//         max=a[i];
//     }
// }
// cout<<max;
// return 0;
// }
// int min=INT_MAX;
// for(int i=0;i<n;i++){
//     if(a[i]<min){
//         min=a[i];

//     }
    

// }
// cout<<min;
int maxi=INT_MIN;
for(int i=0;i<n;i++){maxi=max(maxi,a[i]);}

cout<<maxi<<endl;

return 0;
}