/*
1) Taking Input

Note
-1 Is The Deliminator So We Can't Store -1
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
Nodes *takeinput(){
    int data;
    cin>>data;
    Nodes *head=NULL;
    Nodes *tail=NULL;
    while(data!=-1){
        //Creating Linked List
        Nodes *n = new Nodes(data);
        /*
        n is stored in stack memory each time n is destructed
        if we didn't allocate nodes dynamically after the loop that will be destroyed
        */
        //1st node
        if(head==NULL){
            head=n;
            tail=n;
        }
        else{
            tail->next=n;
            tail=n;
        }
        cin>>data;
    }
    return head;
}
int main(){
    Nodes n1(1);
    Nodes n2(2);
    Nodes n3(3);
    n1.next=&n2;
    n2.next=&n3;
    Nodes *head=&n1;
    print(head);
    //Taking Input
    Nodes *head2=takeinput();
    print(head2);
    return 0;
}
