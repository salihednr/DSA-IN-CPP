/*
Selection Sort Algorithm
In-Place Comparison Sort

Time Complexity: 
Best Case: O(1)
Worst Case: O(n)
Average Case: O(n)

Space Complexity:
O(1)
So This Sorting Algorithm Is Not At All Efficient For Large Set Of Datas.
*/
#include<iostream>
using namespace std;
void selectionSort(int ar[],int n){
    for(int i=0;i<n-2;i++){
        int min=i;
        for(int j=i+1;j<n;j++)
            if(ar[min]>ar[j])
                min=j;
        if(min!=i)
            swap(ar[i],ar[min]);
    }
}
int main()
{
    int n;
    cin>>n;
    int ar[n]={0};
    //Input Array
    for(int i=0;i<n;i++)
        cin>>ar[i];
    //Print Array
    cout<<"Unsorted Array:"<<endl;
    for(int i=0;i<n;i++)
        cout<<ar[i]<<" ";
    cout<<endl;
    //Calling Selection Sorting Function
    selectionSort(ar,n);
    cout<<"Sorted Array:"<<endl;
    for(int i=0;i<n;i++)
        cout<<ar[i]<<" ";
    cout<<endl;
    return 0;
}
