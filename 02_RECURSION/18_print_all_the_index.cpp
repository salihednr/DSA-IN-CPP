/*
Print All The Position Of Element In An Array
*/
#include<iostream>
using namespace std;
//Method-1
void allPosition(int ar[],int n,int key,int i=0){
    if(i==n)
        return;
    if(ar[i]==key)
        cout<<i<<" ";
    allPosition(ar,n,key,i+1);
}
// Method-2 (Reverse)
void allPosition2(int ar[],int n,int key,int i=0){
    if(n==0)
        return;
    allPosition2(ar+1,n-1,key,i+1);
    if(ar[0]==key)
        cout<<i<<" ";
}
int main()
{
    int ar[]={1,2,3,2,3,4,5,3,4,6};
    int n=sizeof(ar)/sizeof(int);
    int key=3;
    allPosition(ar,n,key);
    cout<<endl;
    allPosition2(ar,n,key);
    return 0;
}
