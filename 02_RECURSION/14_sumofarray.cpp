#include <iostream>
using namespace std;
//First Method Right To Left
int sumOfArray(int ar[],int n){
    if(n==1)
        return ar[0];
    return ar[0]+sumOfArray(ar+1,n-1);
}
//Second Method Right To Left
int sumOfArray2(int ar[],int n){
    if(n==0)
        return 0;
    return ar[n-1]+sumOfArray2(ar,n-1);
}
//Third Method index Based
int sumOfArray3(int ar[],int n,int i){
    if(n==i)
        return 0;
    return ar[i]+sumOfArray3(ar,n,i+1);
}
int main() {
    int ar[]={1,2,3,4,5,6,7,8,9,10};
    cout<<sumOfArray(ar,10)<<endl;
    cout<<sumOfArray2(ar,10)<<endl;
    cout<<sumOfArray3(ar,10,0)<<endl;
    return 0;
}
