#include<iostream>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    int x=0;
    int y=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='n'&&s[i+1]=='s'||s[i]=='e'&&s[i+1]=='w'){
            x++;
        }
        else if(s[i]=='n'&&s[i+1]=='n'||s[i]=='s'&&s[i+1]=='s'||s[i]=='w'&&s[i+1]=='w'||s[i]=='e'&&s[i+1]=='e'){
            y++;
        }

    }
    cout<<x+5*y<<endl;
}
return 0;
}