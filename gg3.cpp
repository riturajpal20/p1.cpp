#include<bits/stdc++.h>
// #include<map>
using namespace std;

int main(){
// string str;
// cin>>str;
// map<char,int> m;
// for(int i=0;i<str.length();i++){
//     m[str[i]]++;
// }
// for(auto itr=m.begin();itr!=m.end();++itr){
//     cout<<itr->first<<itr->second<<endl;
// }
int arr[26];
string str;
cin>>str;
for(int i=0;i<25;i++){
    arr[i]=0;
}
for(int i=0;i<str.length();i++){
    arr[str[i]-97]++;

}
for(int i=0;i<25;i++){
    cout<<arr[i]<<" ";
}
return 0;
}