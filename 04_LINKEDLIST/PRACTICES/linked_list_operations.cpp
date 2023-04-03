#include<iostream>
#include<climits>
#include<cmath>
using namespace std;
class Nodes{
    public:
        int data;
        Nodes *next;
    Nodes(int data,Nodes *next=NULL){
        this->data=data;
        this->next=NULL;
    }
};
//Print Recursively
void display(Nodes *head){
    if(head==NULL)
    {    
        cout<<"NULL"<<endl;
        return;
    }
    cout<<head->data<<"->";
    display(head->next);
}
//Reverse Print Recursively 
void displayRec(Nodes *head){
    if(head==NULL)
    {
        return;
    }
    displayRec(head->next);
    cout<<head->data<<"->";
}
//Counting Nodes Linear
int element(Nodes *head){
    int count=0;
    while(head!=NULL)
    {
        head=head->next;
        count++;
    }
    return count;
}
//Counting Elements Recursively
int elementRec(Nodes *head){
    if(head==NULL)
        return 0;
    return 1+elementRec(head->next);
}
//Sum Of The Linked List Linearly
int sumLinkedList(Nodes *head){
    int sum=0;
    while(head!=NULL){
        sum+=head->data;
        head=head->next;
    }
    return sum;
}
//Sum Of The Linked List Recursively
int sumLinkedListRec(Nodes *head){
    if(head==NULL)
        return 0;
    return (head->data)+sumLinkedListRec(head->next);
}
//Maximum Element In Linked List Linearly
int maxElement(Nodes *head){
    int maxE=INT_MIN;
    while(head){
        if((head->data)>maxE)
            maxE=head->data;
        head=head->next;    
    }
    return maxE;
}
//Maximum Element In Linked List Recursively
int maxElementRec(Nodes *head){
    if(head->next==NULL)
        return head->data;
    int res=maxElementRec(head->next);
    return max(res,head->data);
}
//Searching In Linked List
bool searchElement(Nodes *head,int key){
    if(head==NULL)
        return false;
    if(head->data==key)
        return true;
    return searchElement(head->next,key);
}
//Insert Element In Linked List Linearly
Nodes *insertElement(int pos,Nodes *head,Nodes *temp){
    if(pos<0)
        return head;
    else{
        //Insert In First Position
        if(pos==0){
            temp->next=head;
            head=temp;        
        }
        //Insert In Between
        else{
            Nodes *p=head;
            for(int i=0;i<pos-1;i++){
                p=p->next;    
            }
            temp->next=p->next;
            p->next=temp;
        }
    }
    return head;
}
//Delete Nodes
Nodes *deleteNode(int pos,Nodes *head){
    Nodes *p=head;
    if(pos==0)
        return head->next;
    for(int i=0;i<pos-1;i++){
        p=p->next;    
    }
    p->next=p->next->next;
    return head;
}
//Merge Two Sorted Linked List (Linearly)
Nodes *mergeTwoLinkedList(Nodes *l1,Nodes *l2){
    Nodes *finalHead=NULL;
    Nodes *tail=NULL;
    if(l1==NULL)
        return l2;
    if(l2==NULL)
        return l1;
    if((l1->data)>(l2->data))
    {
        finalHead=l2;
        l2=l2->next;
    }
    else
    {
        finalHead=l1;
        l1=l1->next;
    }
    tail=finalHead;
    while(l1!=NULL && l2!=NULL){
        if((l1->data)<(l2->data)){
            tail->next=l1;
            l1=l1->next;
            tail=tail->next;
        }
        else
        {
            tail->next=l2;
            l2=l2->next;
            tail=tail->next;
        }
    }
    if(l1==NULL)
        tail->next=l2;
    if(l2==NULL)
        tail->next=l1;
    return finalHead;
}
//Merge Two Sorted Linked List Recursively
Nodes *mergeTwoLinkedListRec(Nodes *l1,Nodes *l2){
    if(l1==NULL)
        return l2;
    if(l2==NULL)
        return l1;
    Nodes *newHead=NULL;
    if(l1->data > l2->data){
        newHead=l2;
        newHead->next=mergeTwoLinkedListRec(l1,l2->next);
    }
    else
    {
        newHead=l1;
        l1->next=mergeTwoLinkedListRec(l1->next,l2);
    }
    return newHead;
}
int main(){
    //Creating First Linked List
    Nodes *n1=new Nodes(11);
    Nodes *head=n1;
    Nodes *n2=new Nodes(20);
    n1->next=n2;
    Nodes *n3=new Nodes(31);
    n2->next=n3;
    Nodes *n4=new Nodes(40);
    n3->next=n4;
    //Display Linked List
    display(head);
    //Display Linked List Reverse Order
    displayRec(head);
    //Print The Number Of Element In A Linked List
    cout<<"\nNumber Of Element In A Linked List (Linearly): "<<element(head)<<endl;
    cout<<"Number Of Elements In A Linked List(Recursively): "<<elementRec(head)<<endl;
    //Sum Of The Linked List
    cout<<"Sum Of The Linked List(Linearly): "<<sumLinkedList(head)<<endl;
    cout<<"Sum Of The Linked List(Recursively): "<<sumLinkedListRec(head)<<endl;
    //Maximum Element In A Linked List
    cout<<"Maximum Element In An Array(Linearly): "<<maxElement(head)<<endl;
    cout<<"Maximum Element In An Array(Linearly): "<<maxElementRec(head)<<endl;
    if(searchElement(head,201))
        cout<<"Element Found"<<endl;
    else
        cout<<"Element Not Found"<<endl;
    //Insert Beginning
    Nodes *temp=new Nodes(11);
    head=insertElement(0,head,temp);
    display(head);
    //Insert In Between
    Nodes *temp2=new Nodes(22);
    head=insertElement(3,head,temp2);
    display(head);
    //Insert At End
    Nodes *temp3=new Nodes(3333);
    head=insertElement(6,head,temp3);
    display(head);
    //Delete Node
    head=deleteNode(0,head);
    display(head);
    //Second Linked List
    Nodes *m1=new Nodes(10);
    Nodes *m2=new Nodes(20);
    Nodes *m3=new Nodes(21);
    Nodes *m4=new Nodes(26);
    m1->next=m2;
    m2->next=m3;
    m3->next=m4;
    Nodes *headl2=m1;
    //Two Linked List Are Sorted
    cout<<"First Sorted Linked List: ";
    display(n1);
    cout<<"Second Sorted Linked List: ";
    display(m1);
    cout<<"Merge Two Sorted Linked List: ";
    Nodes *newHead=mergeTwoLinkedListRec(n1,m1);
    display(newHead);
    return 0;
}
