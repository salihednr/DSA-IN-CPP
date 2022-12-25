/*
Problem
Start With N;
Ends With 1;
if n is even print n/2
if n is odd print 3*n+1 
Goes On 
N=6 : 6 3 10 5 16 8 4 2 1
N=5 : 5 16 8 4 2 1 
N=7 : 7 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1 
*/
#include <iostream>
using namespace std;
void pattern(int n){
    cout<<n<<" ";
    if(n==1)
        return;
    if(n%2==0)
        pattern(n/2);
    else
        pattern((3*n)+1);
}
int main() {
    int n=7;
    pattern(n);
    return 0;
}
