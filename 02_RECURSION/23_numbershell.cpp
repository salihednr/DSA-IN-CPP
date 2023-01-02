/*
51 => five one
321 => three two one
*/
#include <iostream>
using namespace std;
string shell[]={"zero","one","two","three","four","five","six","seven","eight","nine","ten"};
void numbershell(int n){
    if(n>0){
        numbershell(n/10);
        cout<<shell[n%10]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    numbershell(n);
    return 0;
}
