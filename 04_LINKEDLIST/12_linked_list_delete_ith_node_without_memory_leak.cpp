/*
-1
No Element
Length Of The Linked List: 0
Enter I Value, To Insert Element After The Ith Position: -7
Enter Data: 1
Invalid I
No Element
Delete Ith Node: 0
Not Possible To Delete -1
No Element
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
    if(head==NULL)
        return 0;
    if(head->next==NULL)
        return 1;
    return 1+length(head->next);
}
void print(Nodes *head){
    if(head==NULL)
        cout<<"No Element";
    while(head!=NULL){
        if(head->next)
            cout<<head->data<<"->";
        else
            cout<<head->data;
        head=head->next;
    }
    cout<<endl;
}
Nodes *insertIthPos(Nodes *head,int data,int i){
    Nodes *temp=head;
    int len=length(head);
    //Inserting In First Position
    if(i==-1&&len!=0)
    {
        Nodes *n = new Nodes(data);
        n->next=head->next;
        head=n;
        return head;
    }
    //Insert First Element (Length Is 0)
    if(i==-1&&len==0){
        Nodes *n = new Nodes(data);
        head=n;
        return head;
    }
    if(i<-1||i>len-1)
    {
        cout<<"Invalid I"<<endl;
        return head;
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
    return temp;
}
//Delete Ith Node (Memory Leak)
Nodes *deleteIthNode(Nodes *head,int i){
    int len=length(head);
    //Checking Non Possible Cases For Deletion
    if(len==0||i>len-1||i<0)
    {
        cout<<"Not Possible To Delete -1"<<endl;
        return head;
    }
    //Deleting First Element (Without Memory Leak)
    if(i==0){
        Nodes *temp=head->next;
        delete head;    //Deleting First Node
        return temp;
    }
    //Deleting All Other Elements
    Nodes *itHNode=NULL;
    Nodes *temp =head;
    Nodes *previousNode=NULL;
    int icount=0;
    while(head!=NULL){
        if(i==icount){
            itHNode=head;
            head=NULL;
        }
        else{
            previousNode=head;
            head=head->next;
            icount++;
        }
    }
    previousNode->next=itHNode->next;
    //Deleting Ith Node
    delete itHNode;
    return temp;
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
    head=insertIthPos(head,data,i);
    print(head);
    cout<<"Delete Ith Node: ";
    cin>>i;
    head=deleteIthNode(head,i);
    print(head);
    return 0;
}
