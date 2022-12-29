/*
Bubble Sort Optimized Best Case Will Become O(n)
Pushing Largest Element To The End Of The Array

Time Complexity:
Best Case: O(n^2)
Average Case:O(n^2)
Worst Case:O(n^2)
Space Complexity:
Constant Space, Space Is Not Increasing W.R.T to input
O(1)
*/
#include <iostream>
using namespace std;
void bubbleSort(int a[],int n)
{
    for(int i=1;i<=n-1;i++){
        int flag=0;
        for(int j=0;j<=n-2;j++){
            if(a[j]>a[j+1]){
                flag=1;    
                swap(a[j],a[j+1]);
            }
        }
        if(flag==0)
            break;
    }
}
int main()
{
    int ar[]={1,7,10,2,5,8};
    int n=sizeof(ar)/sizeof(int);
    cout<<"UNSORTED:"<<endl;
    for(int i=0;i<n;i++)
        cout<<ar[i]<<" ";
    bubbleSort(ar,n);
    cout<<"\nSORTED"<<endl;
    for(int i=0;i<n;i++)
        cout<<ar[i]<<" ";
    return 0;
}
