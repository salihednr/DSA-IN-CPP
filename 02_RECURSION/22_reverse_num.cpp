#include <iostream>
using namespace std;
//Recursive Way
int reverseNum(int n,int num=0){
    if(n==0)
        return num;
    num=num*10+(n%10);
    return reverseNum((n/10),num);
}
//Normal Method
int reverseNum2(int n){
    int num=0;
    while(n>0){
        num=(num*10)+(n%10);
        
        n/=10;
    }
    return num;
}
int main()
{
    int n=31225;
    cout<<reverseNum(n)<<endl;
    cout<<reverseNum2(n)<<endl;
    return 0;
}
