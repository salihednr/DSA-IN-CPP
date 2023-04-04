/*
Stacks Follow LIFO
Stack Is An Abstract Data Type
Operations
    1.PUSH
    2.POP
    3.PRINT
    4.ISEMPTY
    5.SIZE
    6.CAPACITY
    7.TOP
*/
#include<iostream>
#include<iomanip>
using namespace std;
class Stack{
    private:
        int *arr;
        int capacity;
        int nextInd;
    public:
    //Default Constructor
    Stack(){
        arr = new int[4];
        capacity=4;
        nextInd=0;
    }
    
    //Parametrized Constructor
    Stack(int capacity){
        arr = new int[capacity];
        this->capacity=capacity;
        nextInd++;
    }
    //Check Stack Is Empty Or Not
    bool isEmpty(){
        return nextInd==0;
    }
    //Push Element
    void push(int ele){
        if(nextInd<capacity){
            arr[nextInd]=ele;
            nextInd++;
        }
        else{
            int *newArr= new int[2*capacity];
            for(int i=0;i<capacity;i++)
                newArr[i]=arr[i];
            capacity*=2;
            delete []arr;
            arr=newArr;
            arr[nextInd]=ele;
            nextInd++;
        }
    }
    //Remove Element
    void pop(){
        if(isEmpty()){
            cout<<"Underflow"<<endl;
            return;
        }
        nextInd--;
    }
    //Print Last Element
    int top(){
        return arr[nextInd-1];
    }

    //Print Stack
    void print(){
        for(int i=0;i<nextInd;i++)
            cout<<"|"<<setw(5)<<left<<arr[nextInd-i-1]<<"|"<<endl;
        cout<<"|-----|"<<"\n\n";
    }
    //Size Of The Stack
    int size(){
        return nextInd;
    }
    //Capacity Of The Stack
    int Capacity(){
        return capacity;
    }
    //Destructor
    ~Stack(){
        delete []arr;
    }
};

int main(){
    Stack s1;
    s1.push(10);
    s1.push(20);
    s1.push(25);
    cout<<"Size Of The Stack: "<<s1.size()<<endl;
    cout<<"Capacity Of The Stack: "<<s1.Capacity()<<endl;
    s1.print();
    s1.pop();
    s1.push(22);
    s1.push(32);
    s1.push(33);
    cout<<"Size Of The Stack: "<<s1.size()<<endl;
    cout<<"Capacity Of The Stack: "<<s1.Capacity()<<endl;
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    return 0;
}
