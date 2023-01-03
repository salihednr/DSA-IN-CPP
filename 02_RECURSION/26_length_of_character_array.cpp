#include<iostream>
using namespace std;
int lengthCharArray(char ar[]){
    if(ar[0]=='\0')
        return 0;
    return 1+lengthCharArray(ar+1);
}
int main(){
    char ar[]="abc";
    cout<<"Length Of Character Array: "<<endl;
    cout<<lengthCharArray(ar);
    return 0;
}
