// #include<iostream>
// using namespace std;

// int main(){
//     map<int,int> m;
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         m[arr[i]]++;
//     }

//     for(auto itr=m.begin(); itr!=m.end(); itr++){
//         cout<<(itr->first)<<" -> "<<(itr->second)<<endl;
//     }


// return 0;
// }

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
     cin>>str;
     int arr[26];
     for(int i=0; i<26; i++){
         arr[i]=0;
     }

     for(int i=0; i<str.length(); i++){
         int temp=(int)str[i]-97;
         arr[temp]++;
     }
     int indmax=0;
     int c;
    for(int i=0;i<26;i++){
        if(arr[i]>indmax){
            indmax=arr[i];
            c=i;
        }

    }

    cout<<(char)('a'+c)<<" "<<indmax;
    //  for(int i=0; i<26; i++){
    //      cout<<*max_element(arr,arr+25);
    //  }

     cout<<endl;


    // map<char,int> m;
//    cout<<m.size();
// cout<<m.empty();
    // for(int i=0; i<str.length(); i++){
    //     m[str[i]]++;
    // }

    // for(auto itr=m.begin(); itr!=m.end(); itr++){
    //     cout<<(itr->first)<<" "<<(itr->second)<<endl;
    // }

return 0;
}
