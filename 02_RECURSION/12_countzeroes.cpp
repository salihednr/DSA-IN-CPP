// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int count(int n){
    if(n==0)
        return 0;
    int countZeros=count(n/10);
    if(n%10==0)
        return countZeros+1;
    else
        return countZeros;
}
int main() {
    int n;
    cin>>n;
    cout<<count(n);
    return 0;
}
