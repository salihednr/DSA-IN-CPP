/*
Store All Occuring Positions Of The Elements
{1,2,3,2,3,4,5,3,4,6}
1=> {0}
2=> {1,3}
Note:
Vectors Are Pass By Value (By Default)
Arrays Are Pass By Reference (By Default)
*/
#include<iostream>
#include<vector>
using namespace std;
//Method -1 Vector
void storePosition(int ar[],int n,int key,vector<int>&v,int i=0)
{
    if(i==n)
        return;
    if(ar[i]==key)
        v.push_back(i);
    storePosition(ar,n,key,v,i+1);
    
}
//Method -2 Using Array
int storePosition2(int ar[],int n,int key,int s[],int i=0,int j=0)
{
    if(n==i)
        return 0;
    if(ar[i]==key)
    {
        s[j]=i;
        return 1+storePosition2(ar,n,key,s,i+1,j+1);
    }
    return storePosition2(ar,n,key,s,i+1,j);
}
int main()
{
    int ar[]={1,2,3,2,3,4,5,3,4,6};
    int n=sizeof(ar)/sizeof(int);
    int key=2;
    vector<int> v;
    storePosition(ar,n,key,v);
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
    int s[10]={0};
    int count = storePosition2(ar,n,key,s);
    for(int i=0;i<count;i++)
        cout<<s[i]<<" ";
    return 0;
}
