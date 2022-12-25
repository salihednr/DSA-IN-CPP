/*
*****
****
***
**
*
*/
#include <iostream>
using namespace std;
void printTriangle(int n){
    if(n==0)
        return;
    for(int i=0;i<n;i++)
        cout<<"*";
    cout<<endl;
    printTriangle(n-1);
}
int main() {
    int n=5;
    printTriangle(n);
    return 0;
}
