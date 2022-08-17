#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    // int m ,n;
    // cin>>m>>n;
    // int a[n];
    // int b[m];
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    // for(int i=0;i<m;i++){
    //     cin>>b[i];
    // }
    int n,m;
    cin>>n>>m;
    vector<int> v1;
    vector<int> v2;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }
    // for(int i=0;i<n;i++){
    //     cout<<v1[i];
    // }
    for(int i=0;i<m;i++){
        int y;
        cin>>y;
        v2.push_back(y);
    }
    reverse(v1.begin(),v1.end());
    for(int i=0;i<n;i++){
        cout<<v1[i];
    }
    int t=n-m;
    for(int i=0;i<t;i++){
        // v1[n-2]=min(v1[n-1],v1[n-2]);
        // v1.pull_back(v1[n-1]);
        // v1[i+1]=min(v1[i],v1[i+1]);
        // v1.pop_front(v1[i]);
       
        
    }
    int p=0;
    for(int i=0;i<m;i++){
       if(v1[i]==v2[i])
       p++;
    }
    if(p==m){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    
    

    
}
return 0;
}