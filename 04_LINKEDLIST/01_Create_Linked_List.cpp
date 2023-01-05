/*
Linked List Is Created
Class Is A User Defined Database So When We Creating Pointer We Should Use
Nodes *head=&n1;
Here head Can Only Store Memory Address Of Objects Of Class Node
N1 (1,M2)
N2 (2,M3)
N3 (3,NULL)
M:- Memory Address Of
Last Element Must Be Assigned To NULL Pointer
First Element Is Known As Head
Last Element Is Known As Tail
This Type Of Linked List Is Known As Singly Linked List
*/
#include<iostream>
using  namespace std;
class Nodes{
    public:
    int data;
    Nodes *next;
    Nodes(int data){
        this->data=data;
        next=NULL;
    }
};
int main(){
    Nodes n1(1);
    Nodes n2(2);
    Nodes n3(3);
    n1.next=&n2;
    n2.next=&n3;
    Nodes *head=&n1;
    cout<<n1.data<<" "<<n2.data<<" "<<n3.data<<endl;
    cout<<head<<" "<<n1.next<<" "<<n2.next<<" "<<n3.next<<endl;
    return 0;
}
