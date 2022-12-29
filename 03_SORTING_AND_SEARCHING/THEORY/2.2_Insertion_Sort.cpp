/*
Selection Sort
Comparing Sorted Sub List And Inserting Element

Time Complexity:
Best Case: O(n)
Average Case:O(n^2)
Worst Case:O(n^2)
Space Complexity:
Constant Space, Space Is Not Increasing W.R.T to input
O(1)
*/
#include <iostream>
using namespace std;
void insertionSort(int a[],int n)
{
    for(int i=1;i<n;i++){
        int temp=a[i];
        int j=i-1;
        while(j>=0 and a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}
int main()
{
    int ar[]={1,7,10,2,5,8};
    int n=sizeof(ar)/sizeof(int);
    cout<<"UNSORTED:"<<endl;
    for(int i=0;i<n;i++)
        cout<<ar[i]<<" ";
    insertionSort(ar,n);
    cout<<"\nSORTED"<<endl;
    for(int i=0;i<n;i++)
        cout<<ar[i]<<" ";
    return 0;
}
