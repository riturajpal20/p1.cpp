#include<iostream>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n1,n2;
    cin>>n1>>n2;
    // cout<<n1<<n2;
    int p,q;
    if(n1>n2){
        // int r=n1%n2;
        p=n1;
        q=n2;
    }
    else{
        // int r=n2%n1;
        p=n2;
        q=n1;


    }
    int r=p%q;
    while(r!=0){
        p=q;
        q=r;
        r=p%q;

        

    }
    //hcf

    cout<<q<<endl;
    // cout<<n2;
    //lcm
    int lcm =(n1*n2)/q;
    cout<<lcm;

}
return 0;
}