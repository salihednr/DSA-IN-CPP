/*
Slow And Fast Pointer Approach
Uses To Find Middle Element
Slow Pointer Moves One Step Each Time
Fast Pointer Moves Two Step Each Time
When Fast Pointer Hits NULL Slow Pointer Will Be Middle Element
When There Are Even Element Second Element Will Be Middle Element
1 2 3 4 5 6
Middle Element: 4
*/
#include<iostream>
using namespace std;
class Nodes{
    public:
    int data;
    Nodes *next;
    Nodes(int data)
    {
        this->data=data;
        next=NULL;
    }
};
void printNodes(Nodes *head){
    int count=1;
    while(head!=NULL){
        if(head->next)
            cout<<"("<<head->data<<","<<head->next<<"),";
        else
            cout<<"("<<head->data<<","<<head->next<<"),";
        head=head->next;
    }
}
int length(Nodes *head){
    int count=0;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    return count;
}
Nodes *slowAndFastPointerApproach(Nodes *head){
    Nodes *slow=head;
    Nodes *fast=head->next;
    while(fast!=NULL){
        if(fast->next==NULL)
        {
            slow=slow->next;
            fast=NULL;
        }
        else{
            fast=fast->next->next;
            slow=slow->next;
        }
    }
    return slow;
}
int main(){
    Nodes n1(1);
    Nodes n2(2);
    Nodes n3(3);
    Nodes n4(4);
    Nodes n5(5);
    //Nodes n6(6);
    Nodes *head=&n1;
    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    n4.next=&n5;
    //n5.next=&n6;
    printNodes(head);
    cout<<endl;
    cout<<"Length Of The Linked List: "<<length(head)<<endl;
    cout<<"Middle Element: "<<slowAndFastPointerApproach(head)->data<<endl;
    return 0;
}
