/*
Quick Sort Is A Divide And Conquer Algorithm
Fastest Algorithm
Quick Sort Algorthm Is In Place Sorting Algorithm
Time Complexity O(nlogn)
Time Complexity In Worst Case Is O(n^2) But Which Can Be Avoided In Most Cases
Space Complexity O(logn)
Steps
Pick Pivot Element
->First Element
->Last Element(Usually)
->Any Element
Do Partition
Repeat
-> Sorting Is Happening In Partition
*/
#include<iostream>
using namespace std;
int partition(int ar[],int s,int e){
    int pivot=ar[e];    //Last Element As Pivot
    int pIndex=s;
    for(int i=s;i<e;i++){
        if(ar[i]<pivot)
            swap(ar[i],ar[pIndex++]);   //Element Smaller Than Pivot Element Will Be In Left Place
    }
    swap(ar[e],ar[pIndex]);
    for(int i=s;i<=e;i++)
        cout<<ar[i]<<" ";
    cout<<endl;
    return pIndex;
}
void quicksort(int ar[],int s,int e){
    if(s<e){
        int p=partition(ar,s,e);    //Return Pivot Element
        quicksort(ar,s,p-1);
        quicksort(ar,p+1,e);
    }
}
int main(){
    int ar[]={7,9,3,2,6};
    int n=sizeof(ar)/sizeof(int);
    for(int i=0;i<n;i++)
        cout<<ar[i]<<" ";
    cout<<endl;
    quicksort(ar,0,n-1);
    for(int i=0;i<n;i++)
        cout<<ar[i]<<" ";
    return 0;
}
/*
In Place Sorting Algorithm
->No Use Of Auxiliary Spaces
->Just Swap Etc...
->Reduces Space Complexity
*/
