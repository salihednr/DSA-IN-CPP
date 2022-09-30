/*
Find 2^n Without Using Inbuilt Library Or For Loop Just Use Bitwise Operator
Concept
Left Wise Operator
a<<b = a*(2^b)
so 1<<n = 1* (2^n)=2^n
*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	cout<<(1<<n);
	return 0;
}
