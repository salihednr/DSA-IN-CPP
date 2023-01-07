/*
Insert Node At Ith Position
5 6 7 8 9 -1
5->6->7->8->9
Length Of The Linked List: 5
Enter I Value, To Insert Element After The Ith Position: 2
Enter Data: 99
5->6->7->99->8->9
Note
To Insert Element In Beginning Use -1
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
    return 0;
}
