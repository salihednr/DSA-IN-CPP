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
int main(){
    //Creating Linked List
    Nodes *n1=new Nodes(10);
    Nodes *head=n1;
    Nodes *n2=new Nodes(20);
    n1->next=n2;
    Nodes *n3=new Nodes(300);
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
    return 0;
}
