/*
Count Occurance Of The Element
*/
#include<iostream>
using namespace std;
//Method -1
int count(int ar[],int n,int key){
    if(n==0)
        return 0;
    int t=count(ar+1,n-1,key);
    if(ar[0]==key)
        return t+1;
    else
        return t;
    
}
//Method -2 (Right To Left)
int count2(int ar[],int n,int key,int &cnts){
    if(n==0)
        return 0;
    int t=count2(ar+1,n-1,key,cnts);
    if(ar[0]==key)
        cnts++;
    return t;
}
//Method -3(Left To Right)
int count3(int ar[],int n,int key,int &cnts,int i=0){
    if(i==n)
        return 0;
    if(ar[i]==key)
        cnts++;
    count3(ar,n,key,cnts,i+1);
    return 0;
}
int main()
{
    int ar[]={1,2,3,2,3,4,5,3,4,6};
    int n=sizeof(ar)/sizeof(int);
    int key=3;
    int cnts=0;
    int cnts2=0;
    cout<<count(ar,n,key)<<endl;
    count2(ar,n,key,cnts);
    cout<<cnts<<endl;
    count3(ar,n,key,cnts2,0);
    cout<<cnts2<<endl;
    return 0;
}
