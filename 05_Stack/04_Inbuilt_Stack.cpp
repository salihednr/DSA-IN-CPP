/*
Inbuilt Stack
Header File : Stack
Stack Is Implemented Using Template
Operations On Stack
    1.empty
    2.size
    3.pop
    4.push
    5.top
*/
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack <int> s1;
    s1.push(20);
    s1.push(30);
    s1.push(17);
    //Printing Elements In Stack
    //Instead Of s1.size() we can give empty()
    while(s1.size()!=0){
        cout<<s1.top()<<endl;
        s1.pop();
    }
    return 0;
}
