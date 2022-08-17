#include<iostream>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for (int k=0;k<n;k++){
        cin>>arr[k];
    }
    int i=0;
    int x=0;
    while(i<n){
        for (int j=i+1;j<=n;j++){

            if((arr[j]-arr[i])==(j-i)){
                x++;
            }
        }
        i++;
    }
    cout<<x<<endl;

}
return 0;
}