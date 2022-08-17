#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;
    s.push(5);
    s.push(9);
    s.push(12);
    s.pop();
    s.pop();
    s.pop();
    cout<<s.top()<<endl;
    cout<<"size of stack is "<<s.size();
    int t=s.size();
    if(t==0){
        cout<<"stack is empty"<<endl;
    }

return 0;
}