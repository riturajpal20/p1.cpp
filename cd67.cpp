#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<char> s;
    string str;
    cin>>str;
    for (int i=0;i<str.length();i++)
    {   
        if(!s.empty())
        {
            if(str[i]==s.top()){
            s.pop();
        }
        else if(str[i]!=s.top()){
            s.push(str[i]);
        }
        }
        else{
            s.push(str[i]);
        }



}

return 0;
}