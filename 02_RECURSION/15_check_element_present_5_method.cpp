#include <iostream>
using namespace std;
//Using Index Method Returning Index (Exit)
int searchElement(int ar[],int n,int key,int i){
    if(i==n)
        return -1;
    int s=searchElement(ar,n,key,i+1);
    if(ar[i]==key)
        return s+i+1;   //To Cancel Returned -1 we add s(-1)+1 which becomes zero so we can return i
    else
        return s;
}
//Checking In Exit
bool searchElement2(int ar[],int n,int key){
    if(n==0)
        return false;
    int s=searchElement2(ar+1,n-1,key);
    if(s)
        return true;
    if(ar[0]==key)
        return true;
    else
        return false;
}
//Checking In Entry From Left To Right
bool searchElement3(int ar[],int n,int key){
    if(n==0)
        return false;
    if(ar[0]==key)
        return true;
    return searchElement3(ar+1,n-1,key);
}
//Checking In Entry From Right To Left
bool searchElement4(int ar[],int n,int key){
    if(n==0)
        return false;
    if(ar[n-1]==key)
        return true;
    return searchElement4(ar,n-1,key);
}
//Using Index Method Returning Index (Entry)
int searchElement5(int ar[],int n,int key,int i){
    if(i==n)
        return -1;
    if(ar[i]==key)
        return i;
    int s=searchElement5(ar,n,key,i+1);
}
int main() {
    int ar[]={1,2,3,4,5,6,7,8,9,10};
    //1
    cout<<searchElement(ar,10,2,0)<<endl;
    //2
    if(searchElement2(ar,10,5))
        cout<<"Element Found"<<endl;
    else
        cout<<"Element Is Not Found"<<endl;
    //3
    if(searchElement3(ar,10,40))
        cout<<"Element Found"<<endl;
    else
        cout<<"Element Is Not Found"<<endl;
    //4
    if(searchElement4(ar,10,3))
        cout<<"Element Found"<<endl;
    else
        cout<<"Element Is Not Found"<<endl;
    //5
    cout<<searchElement5(ar,10,-3,0)<<endl;
    return 0;
}
