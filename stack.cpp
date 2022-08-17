#include<bits/stdc++.h>
using namespace std;

int main(){
stack<int> s;
s.push(2);
s.push(8);
s.push(98);
// while(!s.empty()){
//     cout<<s.top()<<endl;
//     s.pop();
// }
cout<<s.peek()<<endl;
return 0;
}