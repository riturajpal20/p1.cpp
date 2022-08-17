#include<bits/stdc++.h>
using namespace std;

int main(){
long long int t;
cin>>t;
while(t--){
    long long int n;
    cin>>n;
       long long int x=n/3;
    long long int p=n%3;
    long long int q=n%2;
    if(q==0){
        cout<<n/2<<endl;
    }
     else if(p==0){
        cout<<n/3<<endl;
    }
    // int p=n%3;
    // int x=n/3;
    else if(p>1){
        cout<<x+1<<endl;
    }
    else if(p==1){
        cout<<x+2<<endl;
    }

}
return 0;
}