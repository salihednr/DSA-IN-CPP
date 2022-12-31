/*
Find The Majority Element 
Majority Element: Element Which Occurs Morethan N/2 Times (EXclusive)
An Array Will Only Have One Majority Element
If Array Is Sorted Middle Element Would Be Majority Element (If Exits)
Method - 1 (Brute Force)
Time Complexity : O(n^2)
Space Complexity : O(1)
Method -2 (Hashmap)
Method -3 (Sort)
Sort Array Middle Element WIll Be Majority Element
Time Complexity: O(nlogn) 
Space Complexity: O(1)

Method -4 (Moore's Majority Voting Algorithm)
eg:
{1,2,3,3} = > No Majority Element
{1,1,2}=> 1

*/
#include<iostream>
using namespace std;
bool checkMajority(int ar[],int n,int m){
    int count = 0;
    for(int i=0;i<n;i++){
        if(ar[i]==m)
            count++;
    }
    if(count>n/2)
        return true;
    return false;
}
int majorityElement(int ar[],int n){
    //Assuming First Element Is Majority Element
    int maj_index=0;
    int count=1;
    for(int i=1;i<n;i++){
        if(ar[maj_index]==ar[i])
        {
            count++;
        }
        else
            count--;
        if(count==0){
            maj_index=i;
            count++;
        }
    }
    return ar[maj_index];
}
int main(){
    int ar[]={2,3,4,3,3,2,2};
    int n=sizeof(ar)/sizeof(int);
    int m=majorityElement(ar,n);
    if(checkMajority(ar,n,m))
        cout<<m;
    else
        cout<<"No Majority Element";
    return 0;
}

/*
Tutorial:
https://www.youtube.com/watch?v=n5QY3x_GNDg
*/
