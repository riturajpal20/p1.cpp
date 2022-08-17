#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int arr[n];
int a[n];
for (int i=0;i<n;i++){
    cin>>arr[i];
    a[i]=0;
}
int i=0;
int j=n-1;
while(i<=j){
    swap(arr[i],arr[j]);
    i++;
    j--;
}
return 0;
}