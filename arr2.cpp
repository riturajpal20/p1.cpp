#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;

        }
    }
    return 0;
}

int main(){
int n;
cin>>n;
int arr[n];
for (int i=0;i<n;i++){
    cin>>arr[i];
}
int key;
cin>>key;

bool found=search(arr,n,key);
if(found){
    cout<<"element is present "<<endl;
}
else{
    cout<<"elemnt is not present "<<endl;
}

return 0;
}