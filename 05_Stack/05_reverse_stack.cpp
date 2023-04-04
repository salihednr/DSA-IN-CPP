/*
Reverse Stack
Simple Method
Create New Stack Copy The Elements
Time Complexity : O(n)
Space Complexity: O(n)
*/
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack <int> s1;
    s1.push(20);
    s1.push(30);
    s1.push(17);
    stack<int> s2;
    while(s1.size()!=0){
        s2.push(s1.top());
        s1.pop();
    }
    while(s2.size()!=0){
        cout<<s2.top()<<endl;
        s2.pop();
    }
    return 0;
}
