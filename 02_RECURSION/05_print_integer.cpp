/*
PRINTINT REVERSE ORDER INTEGER NUMBERS
5
5 4 3 2 1
*/
#include<iostream>
using namespace std;
void print(int n)
{
    if(n==0)
        return;
    print(n-1);
    cout<<n<<" ";

}
int main()
{
    int n;
    cin>>n;
    print(n); 
    return 0;
}
