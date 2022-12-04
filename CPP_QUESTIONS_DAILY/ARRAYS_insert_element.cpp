/*
Insert Element At Particular Position
ar = {1,2,3,4,5} Is Given Array
Insert Particular Element At Particular Position
input:
3 21

output:
1 2 3 21 4 5

Insert 21 At 3rd Position So That New Array Is 
*/

#include<iostream>
using namespace std;
int main()
{
    int ar[100]={1,2,3,4,5};
    int ins,pos;
    cin>>pos>>ins;
    for(int i=4;i>=pos;i--)
        ar[i+1]=ar[i];
    ar[pos]=ins;
    for(int i=0;i<6;i++)
        cout<<ar[i]<<" ";
    return 0;
}

/*
Solution 2 Creating Duplicate Array


#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    int arins[n+1];
    int ins,pos;
    for(int i=0;i<n;i++)
        cin>>ar[i];
    cin>>pos>>ins;
    int j=0;
    for(int i=0;i<=n;i++)
    {
        if(pos==i)
        {
            ar[i]=ins;
            i++;
        }
        arins[i]=ar[j];
        j++;
    }
    for(int i=0;i<=n;i++)
        cout<<arins[i]<<" ";
    return 0;
}

*/
