/*
Merge Sort
Fastest Sorting Algorthm
Divide And Conquer
It divides input into two halves, call itself for the two halves(Recursively) and then merge two sorted arrays

Time Complexity:
O(nlogn)
Space Complexity:
Depends


*/
#include<iostream>
#include<vector>
using namespace std;
void mergeArray(vector<int>&ar,int s,int e){
    int mid=(s+e)/2; // taking mid
    int i=s;    //starting index of left sub array
    int j=mid+1; //starting index of right sub array
    vector<int> temp; //temperory vector
    while(i<=mid&&j<=e){
        if(ar[i]>=ar[j])
            temp.push_back(ar[j++]);
        else
            temp.push_back(ar[i++]);
    }
    //only one of two while loops will work or none will work
    while(i<=mid) //Copying Remaining Elements Of Left Sub Array (IF)
        temp.push_back(ar[i++]);
    while(j<=e) //Copying Remaining Elements Of Right Sub Array (IF)
        temp.push_back(ar[j++]);
    int t=0;
    for(int i=s;i<=e;i++){  //copying elements from temperory to parmanent array
        ar[i]=temp[t++];           
    }
}
void mergeSort(vector<int>&ar,int s,int e){
    if(s<e){
        int mid=(s+e)/2;
        mergeSort(ar,s,mid); 
        mergeSort(ar,mid+1,e);
        mergeArray(ar,s,e);
    }
}
int main(){
    vector<int> ar={1,5,3,2,7,6};
    cout<<"Unsorted Array: "<<endl;
    for(int i=0;i<ar.size();i++)
        cout<<ar[i]<<" ";
    mergeSort(ar,0,ar.size()-1);
    cout<<"\nSorted Array: "<<endl;
    for(int i=0;i<ar.size();i++)
        cout<<ar[i]<<" ";
    return 0;
}
