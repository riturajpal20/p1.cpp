#include<bits/stdc++.h>
using namespace std;
int main(){
                 int t;
                 cin>>t;
                 while(t--){
                                  int n;
                                  cin>>n;
                                  int arr[n];
                                  for (int i=1;i<=n;i++){
                                                   cin>>arr[i];
                                  }
                                  int x=0;
                                  for(int i=2;i<=n;i++){
                                              if(arr[i]%arr[1]==0)
                                              x++;
                                  }
                                  if(x==(n-1)){
                                                   cout<<"yes"<<endl;
                                  }
                                  else{
                                                   cout<<"no"<<endl;
                                  }
                 }
}