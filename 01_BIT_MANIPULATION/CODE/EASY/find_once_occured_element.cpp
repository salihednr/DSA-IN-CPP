/*
A Array Is Given Where All Element Occur Twice But One Element Only Occurs Once Findout That Element ?
a^a=0
a^b^a^c^a^b=c
Note:-
Can't Use For Loop Morethan Once
Can't Sort Array
Use Bitwise Operator
*/
#include<iostream>
using namespace std;
int main()
{
	int ar[]={2,1,3,9,7,7,3,1,9};
	int siz=sizeof(ar)/sizeof(int);
	int xr=0;
	for(int i=0;i<siz;i++)
	{
		xr=(xr^ar[i]);
	}
	cout<<xr;
	return 0;
}
