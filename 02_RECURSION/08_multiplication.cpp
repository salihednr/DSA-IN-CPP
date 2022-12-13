/*
EASY PROBLEM
MULTIPLICATION WITHOUT USING STAR OPERATOR
n*m=n+n+n+n+..... upto m's

*/
#include<iostream>
using namespace std;
int k=0;
int multiply(int n,int m)
{
    if(m==0)
        return 0;
    return n+multiply(n,m-1);
}
int main()
{
    int m,n;
    cin>>m>>n;
    cout<<multiply(n,m); 
    return 0;
}
