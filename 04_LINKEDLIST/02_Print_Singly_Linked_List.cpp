/*
Singly Linked List Print All The Elements Of The Linked List Using While Loop
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
void print(Nodes *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main(){
    Nodes n1(1);
    Nodes n2(2);
    Nodes n3(3);
    n1.next=&n2;
    n2.next=&n3;
    Nodes *head=&n1;
    print(head);
    print(head);
    return 0;
}
