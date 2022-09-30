/*
Swap Using Bitwise Operator XOR Or Using Without 3rd Variable Or Inbuilt Function
Concept-1
a=a^b
b=a^b // ((a^b)^b) = so b becomes a
a=a^b // (a^b)^a = so a becomes b
*/
#include<iostream>
using namespace std;
int main()
{
	int n,m;
	n=2;
	m=9;
	cout<<"N is: "<<n<<endl;
	cout<<"M is: "<<m<<endl;
	//swap without using third variable
	/*
	Using Mathematics
	n=n+m;
	m=n-m;
	n=n-m;*/
	//Using Bitwise Operator XOR
	n=n^m;
	m=n^m;
	n=n^m;
	cout<<"N is After Swap: "<<n<<endl;
	cout<<"M is After Swap: "<<m<<endl;
	return 0;
}
