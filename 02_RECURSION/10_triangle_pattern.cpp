/*
*
**
***
****
*****
*/
#include <iostream>
using namespace std;
void printTriangle(int n){
    if(n==0)
        return;
    printTriangle(n-1);
    for(int i=0;i<n;i++)
        cout<<"*";
    cout<<endl;
}
int main() {
    int n=5;
    printTriangle(n);
    return 0;
}
