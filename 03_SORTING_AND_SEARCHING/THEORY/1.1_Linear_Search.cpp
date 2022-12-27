/*
Linear Search Using Iterative Way
Traversing Entire Array
Array Need Not To Be Sorted
Best For Small Arrays

Time Complexity:
Best Case:O(1)
Worst Case:O(n)
Average Case:O(n)

Space Complexity:
O(1)
*/
#include <iostream>
using namespace std;
void linearSearch(int ar[],int n,int key)
{
    for(int i=0;i<n;i++){
        if(ar[i]==key){
            cout<<"Element Found At The Position :"<<i<<endl;
            return;
        }
        
    }
    cout<<"Element Not Found"<<endl;
    return;
}
int main()
{
    int ar[]={1,4,6,2,3};
    int n=sizeof(ar)/sizeof(int);
    linearSearch(ar,n,4);
    return 0;
}
