#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
    while(t--)
	{int n;
	cin>>n;
	int arr[n-1];
	for(int i=0;i<n-1;i++){
	    cin>>arr[i];
	}
	int x=0;
	for (int i=0;i<n-1;i++){
	    if((arr[i]==0&&arr[i+1]==1)||(arr[i]==1&&arr[i+1]==0)){
	        x++;
	    }
	    
	}
	cout<<x<<endl;
    }
	
	return 0;
}
