/*
Print Ith Node Of The Linked List
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
//Length Of The Linked List
int length(Nodes *head){
    int len =0;
    while(head!=NULL){
        head=head->next;
        len++;
    }
    //while(head)==while(head!=NULL)
    return len;
}
int lengthRec(Nodes *head){
    if(head==NULL)
        return 0;
    return 1+lengthRec(head->next);
}
void printIthNode(Nodes *head,int i){
    int len=1;
    while(len<=i){
        head=head->next;
        len++;
    }
    cout<<head->data<<endl;
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
    cout<<length(head2)<<endl;
    cout<<"Length Recursively"<<length(head2)<<endl;
    printIthNode(head2,2);
    return 0;
}
