#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int sum=0;
	    int i=1;
	    while(sum<n){
	        sum=sum+i;
	        i++;
	    }
	    if(sum==n){
	    cout<<i-1<<endl;
	    }else{
	        cout<<i-2<<endl;
	    }
	}
	return 0;
}