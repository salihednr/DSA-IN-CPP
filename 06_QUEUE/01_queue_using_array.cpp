#include<iostream>
using namespace std;
template<typename T>
class Queue{
    private:
        T *arr;
        int nextIndex;
        int firstIndex;
        int size;
        int capacity;
    public:
        //Default Constructor
        Queue(){
            size=0;
            capacity=5;
            arr=new T[capacity];
            nextIndex=-1;
            firstIndex=0;
        }
        //Parametrized Constructor
        Queue(int capacity){
            this->capacity=capacity;
            arr=new T[capacity];
            size=0;
            nextIndex=0;
            firstIndex=-1;
        }
        //Returning Size
        int getSize(){
            return size;
        }
        //Returning Whether Queue Is Empty Or Not
        bool isEmpty(){
            return size==0;
        }
        //Inserting Element
        void push(T data){
            if(size==capacity){
                cout<<"Insertion Failed, Queue Is Full"<<endl;
                return;
            }
            cout<<"Element: "<<data<<", Inserted Successfully At The Index Of: "<<nextIndex<<endl;
            arr[nextIndex]=data;
            //This Will Help To Make Queue In Circular Array(Element WIll Be Inserted In The Leading Gap)
            //Leading Gap Will Be Created When POP Is Called Because Of FIFO
            nextIndex=(nextIndex+1)%capacity;
            //Inserting First Element
            if(firstIndex==-1){
                firstIndex=0;    
            }
            size++;
            
        }
        //Returning First Element(Only This Element Can Be Removed)
        T front(){
            //Checking Queue Is Empty Or Not
            if(size==0){
                cout<<"Sorry, Queue Is Empty"<<endl;
                return 0;
            }
            //Queue Is Not Empty So Return Front Element
            return arr[firstIndex];
        }
        //Remove Element From The Beginning
        void pop(){
            //Checking Queue Is Empty Or Not
            if(isEmpty()){
                cout<<"Deletion Failed, Queue Is Empty"<<endl;
                return;
            }
            //Queue Is Not Empty
            //Moving firstIndex Circularly
            cout<<"Element: "<<front()<<" Deleted Successfully From The Index Of: "<<firstIndex<<endl;
            firstIndex=(firstIndex+1)%capacity;
            size--;
            //Resetting Value (Optional) Queue Will Work Without This Or With This
            //This Will Help To Start Queue From The Beginning Else After Size Becomes 0
            //Insertion Will Happen In The Middle Of Queue
            if(size==0){
                firstIndex=-1;
                nextIndex=0;
            }
        }
        int getCapacity(){
            return capacity;
        }
        void print(){
            for(int i=0;i<size;i++){
                if(i<size-1)
                    cout<<arr[(firstIndex+i)%capacity]<<" <- ";
                else
                    cout<<arr[(firstIndex+i)%capacity];
            }
            cout<<endl;
        }
};
int main()
{
    cout<<"Welcome To Queue"<<endl;
    Queue<int> q1(6);
    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);
    q1.push(50);
    q1.push(60);
    q1.push(70);
    q1.print();
    cout<<"Capacity: "<<q1.getCapacity()<<endl;
    cout<<"Size: "<<q1.getSize()<<endl;
    q1.pop();
    q1.pop();
    q1.push(45);
    q1.print();
    cout<<"Capacity: "<<q1.getCapacity()<<endl;
    cout<<"Size: "<<q1.getSize()<<endl;
    return 0;
}
