/*
Insert Node At Ith Position
*/
#include<iostream>
using namespace std;
class Nodes{
    public:
    int data;
    Nodes *next;
    Nodes(){
        data=0;
        next=NULL;
    }
    Nodes(int data){
        this->data=data;
    }
};
Nodes *takeinput(){
    Nodes *head=NULL;
    Nodes *tail=NULL;
    int data;
    cin>>data;
    while(data!=-1){
        Nodes *n = new Nodes(data);
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
int length(Nodes *head){
    if(head->next==NULL)
        return 1;
    return 1+length(head->next);
}
void print(Nodes *head){
    while(head!=NULL){
        if(head->next)
            cout<<head->data<<"->";
        else
            cout<<head->data;
        head=head->next;
    }
    cout<<endl;
}
void insertIthPos(Nodes *head,int data,int i){
    int len=lenlength(head)
    //Inserting In First Position
    if(i==-1&&len!=0)
    {
        Nodes *n = new Nodes(data);
        n->next=head->next;
    }
    if(i==-1&&len)
    if(i<-1||i>len-1)
    {
        cout<<"Invalid I"<<endl;
        return;
    }
    Nodes *itHNode=NULL;
    int icount=0;
    while(head!=NULL){
        if(icount==i)
        {
            itHNode=head;
            head=NULL;
        }
        else
        {
            head=head->next;
            icount++;
        }
    }
    Nodes *n = new Nodes(data);
    //Inserting In Last Position
    if(itHNode->next==NULL)
    {
        itHNode->next=n;
    }
    //Inserting All Other Elements
    else
    { 
        n->next=itHNode->next;
        itHNode->next=n;
    }
}
int main(){
    Nodes *head;
    head=takeinput();
    print(head);
    cout<<"Length Of The Linked List: "<<length(head)<<endl;
    int i;
    cout<<"Enter I Value, To Insert Element After The Ith Position: ";
    cin>>i;
    cout<<"Enter Data: ";
    int data;
    cin>>data;
    insertIthPos(head,data,i);
    print(head);
    return 0;
}
