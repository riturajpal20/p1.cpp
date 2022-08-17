// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// int t;
// cin>>t;
// while(t--){
//     int s;
//     cin>>s;
//     int f=9;
//     vector<int> v;
//     while(s){
//         if(s>f){
//             v.push_back(f);
//             s=s-f;
//             f--;
//         }
//         else{
//             v.push_back(s);
//             s=0;
//         }
//         // int ans=0;
//         // for(int i=v.size()-1;i>=0;i++){
//         //     ans=(ans*10+v[i]);

//         // }
//         // cout<<ans<<endl;
//     }
//     int ans=0;
//         for(int i=v.size()-1;i>=0;i++){
//             ans=(ans*10+v[i]);

//         }
//         // cout<<ans<<endl;
//         // cout<<"hi";

// }
// // cout<<"hi";
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
        map<int,int> m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        // for(auto itr=m.begin();itr!=m.end();itr++){
        //     cout<<itr->first<<itr->second<<" ";
        // }
        int sum=0;
        int x=0;
        for(auto itr =m.begin();itr!=m.end();itr++){
            if(m[itr]->second==1){
                    x++;
                    if(x==n){
                        cout<<"0"<<endl;
                        break;
                    }
            }
            else if(m[itr]->second>1){
                sum=sum+((m[itr]->second)-1);
            }
        }
        cout<<sum<<endl;

    }

return 0;
}