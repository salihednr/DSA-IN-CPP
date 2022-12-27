/*
Binary Search 
Array Must Be Sorted
Search Element By Repeatedly Dividing The Search Interval In Half

Time Complexity:
Best Case:O(1)
Worst Case:O(n)
Average Case:O(n)

Space Complexity:
O(1)
*/
#include <iostream>
using namespace std;
int binarySearch(int ar[],int s,int e,int key)
{
    while(s<=e){
        int mid=(s+e)/2;
        if(ar[mid]==key)
            return  mid;
        else if(ar[mid]>key)
            e=mid-1;
        else if(ar[mid]<key)
            s=mid+1;
    }
    return -1;
}
int main()
{
    int ar[]={1,2,3,4,5,6};
    int n=sizeof(ar)/sizeof(int);
    cout<<binarySearch(ar,0,n-1,6);
    return 0;
}
