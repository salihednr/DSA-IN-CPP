/*
Reverse An Array
*/
#include <iostream>
using namespace std;
//Printing Reverse Array;
void printReverseArray1(int ar[],int n,int i=0){
    if(i==n)
        return;
    cout<<ar[n-i-1]<<" ";
    printReverseArray1(ar,n,i+1);
}
//Storing Reverse Array(Left To Right)
void reverseArray2(int ar[],int n,int i=0){
    if(i==(n/2))
        return;
    swap(ar[i],ar[n-i-1]);
    reverseArray2(ar,n,i+1);
}
//Method -2 Storing Reverse Array (Right To Left)
void reverseArray3(int ar[],int n,int i=0){
    if(i==(n/2))
        return;
    reverseArray3(ar,n,i+1);
    swap(ar[i],ar[n-i-1]);
}
int main()
{
    int ar[]={1,2,3,4,5,6};
    int n=sizeof(ar)/sizeof(int);
    cout<<"Array Before Reversing:"<<endl;
    for(int i=0;i<n;i++)
        cout<<ar[i]<<" ";
    cout<<endl;
    printReverseArray1(ar,n);
    cout<<endl;
    reverseArray2(ar,n);
    cout<<"Array After Reversing:"<<endl;
    for(int i=0;i<n;i++)
        cout<<ar[i]<<" ";
    cout<<endl;
    reverseArray3(ar,n); //Array Is Already Reversed So We Need Original Array Now
    cout<<"Array After Reversing:(Original Array)"<<endl;
    for(int i=0;i<n;i++)
        cout<<ar[i]<<" ";
    cout<<endl;
    return 0;
}
