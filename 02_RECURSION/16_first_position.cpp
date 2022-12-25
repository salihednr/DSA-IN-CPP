/*
Find The First Position Of The Element In An Array If No Such Element Return -1
*/
#include<iostream>
using namespace std;
//Method -1
int findIndex(int ar[],int n,int key)
{
    if(n==0)
        return -1;
    if(ar[0]==key)
        return n;
    return findIndex(ar+1,n-1,key);
}
//Method -2 Index Based
int findIndex2(int ar[],int n,int key,int i)
{
    if(n==i)
        return -1;
    if(ar[i]==key)
        return i;
    return findIndex2(ar,n,key,i+1);
}
int main()
{
    int ar[]={1,2,4,3,5,2,6,3,1};
    int n=sizeof(ar)/sizeof(int);
    cout<<n-findIndex(ar,n,1)<<endl;
    cout<<findIndex2(ar,n,1,0)<<endl;
    int k=findIndex3(ar,n,3);
    if(k==-1)
        cout<<"No Element"<<endl;
    else
        cout<<k<<endl;
    return 0;
}
