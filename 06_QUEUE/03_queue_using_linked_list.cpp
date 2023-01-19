#include<iostream>
using namespace std;
template<typename T>
class Nodes{
    public:
    T data;
    Nodes<T> *next;
    //Default Constructor
        Nodes(){
            data=0;
            next=NULL;
        }    
    //Parametrized Constructor
        Nodes(T data){
            this->data=data;
            next=NULL;
        }
};
template<typename T>
class Queue{
    private:
    Nodes<T> *head;
    Nodes<T> *tail;
    int size;
    public:
    //Default Constructor
    Queue(){
        head=NULL;
        tail=NULL;
        size=0;
    }
    //Size
    int getSize(){
        return size;
    }
    //Empty
    bool isEmpty(){
        return size==0;
    }
    //Push Element
    void push(T data){
        Nodes<T> *n=new Nodes<T>(data);
        //If Queue Is Empty
        if(isEmpty()){
            tail=n;
            head=n;
        }else{
        tail->next=n;
        tail=n;
        } 
        size++;
    }
    //Pop Element
    void pop(){
        if(isEmpty()){
            cout<<"Queue Is Empty"<<endl;
            return;
        }
        Nodes<T> *temp=head;
        head=head->next;
        delete temp;
        size--;
    }
    //Front
    T front(){
        if(isEmpty()){
            cout<<"Queue Is Empty"<<endl;
            return 0;
        }
        return head->data;
    }
    void print(){
        Nodes<T> *temp=head;
        for(int i=0;i<getSize();i++){
            if(temp->next!=NULL){
                cout<<temp->data<<"<-";
            }
            else
            {
                cout<<temp->data;
            }
            temp=temp->next;
        }
        cout<<endl;
        delete temp;
    }
};
int main(){
    Queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(50);
    q.print();
    cout<<q.getSize()<<endl;
    q.pop();
    q.print();
    return 0;
}
