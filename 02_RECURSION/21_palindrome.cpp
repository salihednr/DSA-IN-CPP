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
        return palindrome(ar,s+1,e-1);
    return false; 
}
//Second Method
bool checkPalindrome2(int ar[],int n,int i=0){
    if(i==(n/2))
        return true;
    if(ar[i]!=ar[n-i-1])
        return false;
    return checkPalindrome(ar,n,i+1);   
}
int main()
{
    int ar[]={1,2,2,4,5,4,3,2,1};
    int n=sizeof(ar)/sizeof(int);
    cout<<palindrome(ar,0,n-1)<<endl;
    cout<<checkPalindrome2(ar,n)<<endl;
    return 0;
}
