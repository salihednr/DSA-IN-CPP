#include<iostream>
using namespace std;
void printCharArray(char ar[]){
    if(ar[0]=='\0')
        return;
    cout<<ar[0];
    printCharArray(ar+1);
}
void printCharArrayReverse(char ar[]){
    if(ar[0]=='\0')
        return;
    printCharArrayReverse(ar+1);
    cout<<ar[0];
}
int main(){
    char ar[]="abc";
    cout<<"Print: "<<endl;
    printCharArray(ar);
    cout<<endl;
    cout<<"Reverse Print: "<<endl;
    printCharArrayReverse(ar);
    return 0;
}
