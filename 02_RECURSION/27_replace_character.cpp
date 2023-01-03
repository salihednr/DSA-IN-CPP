/*
Replace Character Recursively
abcdab change all a into b
bbcdbd will be the answer
*/
#include<iostream>
using namespace std;
//Left To Right
void replaceChar(char ar[],char a,char r){
    if(ar[0]=='\0')
        return;
    if(ar[0]==a)
        ar[0]=r;
    replaceChar(ar+1,a,r);
}
//Right To Left
void replaceChar2(char ar[],char a,char r){
    if(ar[0]=='\0')
        return;
    replaceChar2(ar+1,a,r);
    if(ar[0]==a)
        ar[0]=r;
}
int main(){
    char ar[]="abcada";
    cout<<ar<<endl;
    replaceChar(ar,'a','z');
    cout<<ar<<endl;
    replaceChar2(ar,'z','b');
    cout<<ar<<endl;
    return 0;
}
