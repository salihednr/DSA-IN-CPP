/*
EASY PROBLEM
Sum Of Digits
*/
#include<iostream>
using namespace std;
int k=0;
int digit(int n)
{
    if(n==0)
        return 0;
    return (n%10)+digit(n/10);

}
int main()
{
    int n;
    cin>>n;
    cout<<digit(n); 
    return 0;
}
