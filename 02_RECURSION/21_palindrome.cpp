/*
Palindrome Check (Integer Array)
*/
#include <iostream>
using namespace std;
bool palindrome(int ar[],int s,int e)
{
    if(s>e)
        return true;
    if(ar[s]==ar[e])
    {
        return palindrome(ar,s+1,e-1);
    }
    return false;
    
}
int main()
{
    int ar[]={1,2,2,4,5,4,3,2,1};
    int n=sizeof(ar)/sizeof(int);
    cout<<palindrome(ar,0,n-1);
    return 0;
}
