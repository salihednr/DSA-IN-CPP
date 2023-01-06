/*
Note:
key is unque value for each node






Linked List Simple Project
Singly Linked List Operations -
1. appendNode()
2. prepandNode()
3. insertNodeAfter()
4. deleteNodeByKey()
5. UpdateNodeByKey()
6. Print()
*/
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    int key;
    Node * next;
    Node(){
        key=0;
        data=0;
        next=NULL;
    }
    Node(int key,int data){
        this->key=key;
        this->data=data;
    }
};
class singlyLinkedList{
    public:
    Node * head;
    singlyLinkedList(){
        head=NULL;
    }
    singlyLinkedList(Node *n){
       head=n; 
    }
    // 1 Check If Node Exists Using Key Value
    Node *nodeExists(int k){
        Node *temp=NULL;
        Node *ptr=head;
        while(ptr!=NULL){
            if(ptr->key==k)
                temp=ptr;
            ptr=ptr->next;    
        }
        return temp;
    }
    // 2 Append A Node To The List
    void appendNode(Node *n){
        if(nodeExists(n->key)){
            cout<<"Node Already Exits With Key Value "<<n->key<<". Append Another Node With Different Key Value"<<endl;
        }
        else
        {
            //Appending Node Is First Element
            if(head==NULL) 
            {
                head=n;
                cout<<"Node Appended"<<endl;
            }
            //Not First Element
            else
            {
                Node *ptr=head;
                while(ptr->next!=NULL)
                {

                    ptr=ptr->next;
                }
                //ptr stores the address of last element
                ptr->next=n;
                cout<<"Node Appended"<<endl;
            }
        }
    }
    //3 Prepand Node
    void prepandNode(Node *n){
        if(nodeExists(n->key))
            cout<<"Node Already Exits With Key Value "<<n->key<<". Prepand Another Node With Different Key Value"<<endl;
        else{
            //Prepanding First Element
            if(head==NULL)
            {
                head=n;
                cout<<"Node Prepanded"<<endl;
            }
            //Not First Element
            else{
                n->next=head;
                head=n;
                cout<<"Node Prepanded"<<endl;
            }
        }
    }
    //4 Insert Node After A Particular Node In The List
    //k is the position where it should be inserted k
    // n->key is differ from the k
    void insertNodeAfter(int k,Node *n){
        Node *ptr = nodeExists(k);
        if(ptr==NULL)
            cout<<"No Node Exist With The Key Value: "<<k<<endl;
        else{
            if(nodeExists(n->key)!=NULL){
                cout<<"Node Already Exists With The Key Value: "<<n->key<<" Insert Another Node With Different Key Value"<<endl;
            }
            else{
                n->next=ptr->next;
                ptr->next=n;
            }
        }
    }
    //5 Delete Node (Just Unlinking Memory Waste May Happen)
    void deleteNodeByKey(int k){
        if(head==NULL)
            cout<<"Singly Linked List Is Already Empty"<<endl;
        else if(head!=NULL)
        {
            if(head->key==k)
            {
                head=head->next;
                cout<<"Node Unlinked With The Key Value: "<<k<<endl;
            }
            else{
                Node *temp=NULL;
                Node *prevptr=head;
                Node *currentptr=head->next;
                while(currentptr!=NULL){
                    if(currentptr->key==k){
                        temp = currentptr;
                        currentptr=NULL;
                    }
                    else{
                        prevptr=prevptr->next;
                        currentptr=currentptr->next;
                    }
                }
                if(temp!=NULL)
                {
                    prevptr->next=temp->next;
                    cout<<"Node Unlinked With Key Value: "<<k<<endl;
                }
                else
                    cout<<"Node Doesn't Exist With Key Value: "<<k<<endl;
            }
        }
    }
    void updateNodeByKey(int key,int data){
        Node *temp=head;
        Node *ptr=head;
        bool t=false;
        if(head==NULL)
            cout<<"No Elements Are Present In Node"<<endl;
        while(temp!=NULL){
            if(temp->key==key)
            {
                temp==NULL;
                t=true;
                ptr=temp;
            }
            temp=temp->next;
        }
        if(!t)
            cout<<"Node Doesn't Exist With Key Value: "<<key<<endl;
        else{
            cout<<"Updated"<<endl;
            ptr->data=data;
        }


    }
    void printList(){
        Node *temp=head;
        if(head==NULL)
            cout<<"No Element"<<endl;
        while(temp!=NULL){
            if(temp->next)
                cout<<"("<<temp->key<<","<<temp->data<<")"<<",";
            else
                cout<<"("<<temp->key<<","<<temp->data<<")";
            temp=temp->next;

        }
    }


};
int main(){
    singlyLinkedList s;
    int option;
    int key1,k1,data1;
    do{
        cout<<"\nWhat Operation Do You Want To Perform? Select Option Number. Enter 0 to exit. "<<endl;
        cout<<"1. appendNode()"<<endl;
        cout<<"2. prepandNode()"<<endl;
        cout<<"3. insertNodeAfter()"<<endl;
        cout<<"4. deleteNodeByKey()"<<endl;
        cout<<"5. UpdateNodeByKey()"<<endl;
        cout<<"6. print()"<<endl;
        cout<<"7. Clear Screen()"<<endl;
        cin>>option;
        Node *n = new Node();
        switch(option){
            case 0:
                break;
            case 1:
            cout<<"Append Node Operation \nEnter Key & Data Of The Node To Be Appended"<<endl;
            cin>>key1;
            cin>>data1;
            n->key=key1;
            s.appendNode(n);
            break;
            case 2:
            cout<<"Prepend Node Operation \nEnter Key & Data Of The Node To Be Prepanded"<<endl;
            cin>>key1;
            cin>>data1;
            n->key=key1;
            n->data=data1;
            s.prepandNode(n);
            break;
            case 3:
            cout<<"Insert Node After Operation \nEnter Key Of Existing Node After Which You Want To Insert This New Node"<<endl;
            int k1;
            cin>>k1;
            cout<<"Enter Key & Data Of The New Node"<<endl;
            cin>>key1;
            cin>>data1;
            n->key=key1;
            n->data=data1;
            s.insertNodeAfter(k1,n);
            break;
            case 4:
            cout<<"Delete Node By Key Operation - \n Enter Key Of The Node To be Deleted: "<<endl;
            cin>>k1;
            s.deleteNodeByKey(k1);
            case 5:
            cout<<"Update Node By Key Operation - \n Enter Key & New Data To BE Updated"<<endl;
            cin>>key1;
            cin>>data1;
            break;
            s.updateNodeByKey(key1,data1);
            break;
            case 6:
            s.printList();
            break;
            case 7:
            system("clear");
            break;
            default:
            cout<<"Enter Proper Option Number"<<endl;
            break;
        }

    }while(option!=0);
    return 0;
}
