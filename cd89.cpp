// #include<iostream>
// using namespace std;

// int main(){
// int t;
// cin>>t;
// while(t--){
//     int m,n;
//     cin>>m>>n;
//     if((n%2!=0&&m%2!=0)||(n%2==0&&m%2==0)){
//         cout<<"Tonya"<<endl;
//     }

//     else if((n%2==0 && m%2!=0)||(n%2!=0 && m%2==0)){
//         cout<<"Burenka"<<endl;
//     }
// }

// return 0;
// }
#include<iostream>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    // int c=0;
    // if(n>=4){
    //     cout<<"YES"<<endl;

    // }
    // if(n<4){
    //     cout<<"NO"<<endl;
    // }
    // int d=0;
    // for (int i=1;i<=n;i+=2){
    //     if((i+1)%4==0||(i+k)%4==0||((i+1)*(i+k))%4==0){
    //         c=i;
    //         cout<<c<<" "<<c+1<<endl;
    //     }
    //     // else if((i+1+k)%4==0||(i%4)==0||((i+1+k)*(i))%4==0){
    //     //     d=i+1;
    //     //     cout<<d<<" "<<d-1<<endl;

    //     // }

    // }
    // for (int i=1;i<=n;i+=2){
    //      if((i+1+k)%4==0||(i%4)==0||((i+1+k)*(i))%4==0){
    //         d=i+1;
    //         cout<<d<<" "<<d-1<<endl;

    //     }
    // }
    if(k%4==0){
        cout<<"NO"<<endl;
        continue;
    }
    if(k%4==1){
        cout<<"YES"<<endl;
        for (int i=1;i<n;i+=2){
            cout<<i<<" "<<i+1<<endl;
            continue;
        }
    }
    if(k%4==2){
        cout<<"YES"<<endl;
        for(int i=1;i<n;i+=2){
            if(i%4==1){
                cout<<i+1<<" "<<i<<endl;
            }
            else {
                cout<<i<<" "<<i+1<<endl;
            }
        }
    }
    if(k%4==3){
        cout<<"YES"<<endl;
        for(int i=1;i<n;i+=2){
            cout<<i<<" "<<i+1<<endl;
            continue;
            }
    }
}
return 0;
}