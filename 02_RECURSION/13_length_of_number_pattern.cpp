/*
Problem Print Length of This Pattern
Start With N;
Ends With 1;
if n is even print n/2
if n is odd print 3*n+1 
Goes On 
N=6 : 6 3 10 5 16 8 4 2 1 Length = 9
N=5 : 5 16 8 4 2 1  Length = 6
N=7 : 7 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1 length = 17
*/
#include <iostream>
using namespace std;
int pattern(int n){
    if(n==1)
        return 1;
    if(n%2==0)
        return 1+pattern(n/2);
    else
        return 1+pattern((3*n)+1);
}
int main() {
    int n=7;
    cout<<pattern(n);
    return 0;
}
