//Last Index
/*
{1,3,1,2,4,1,2,4,3}
Last Index Of 1=5
Last Index Of 3=8
*/
//Method -1 Reverse Index
int lastPosition(int ar[],int n,int key,int i){
    if(i==-1)
        return -1;
    if(ar[i]==key)
        return i;
    return lastPosition(ar,n,key,i-1);
}
/*
Internally First Method And Second Method Are literally Same
In Method -1 We Don't Need Variable N So If We Want We Can Remove It
*/
//Method -2 Without Using i
int lastPosition2(int ar[],int n,int key){
    if(n==0)
        return -1;
    if(ar[n]==key)
        return n;
    return lastPosition2(ar,n-1,key);
}
int lastPosition3(int ar[],int n,int key,int i=0){
    if(i==n)
        return -1;
    int t=lastPosition3(ar,n,key,i+1);
    if(t==-1)
    {
        if(ar[i]==key)
            return i;
        else
            return -1;
    }
    else
        return t;
    
}
#include<iostream>
using namespace std;
int main()
{
    int ar[]={1,3,1,2,4,1,2,4,3};
    int n=sizeof(ar)/sizeof(int);
    int key=1;
    cout<<lastPosition(ar,n,key,n)<<endl;
    cout<<lastPosition2(ar,n,key)<<endl;
    cout<<lastPosition3(ar,n,key)<<endl;
    return 0;
}
