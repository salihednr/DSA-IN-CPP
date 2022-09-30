/*
Concept:-
Last Bit Of Odd Numbers Is 1 So & Operator With 1 Will Give Result Of 1
*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n&1)
		cout<<"Given Number Is Odd";
	else
		cout<<"Given Number Is Even";
	return 0;
}
