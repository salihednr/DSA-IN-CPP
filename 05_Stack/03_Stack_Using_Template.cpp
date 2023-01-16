#include<iostream>
#include<iomanip>
using namespace std;
template <class T>
class Stack{
    private:
    T *ar;
    int capacity;
    int nextIndex;
    public:
    //size 
    //Default Constructor
    Stack(){
        capacity=4;
        ar=new T[capacity];
        nextIndex=0;
    }
    //Paramaterized Constructor
    Stack(int capacity){
        ar=new T[capacity];
        this->capacity=capacity;
        nextIndex=0;
    }
    //Check Empty
    bool isEmpty(){
        return nextIndex==0;
    };
    //Check Size
    int sizeReturn(){
        return nextIndex;
    }
    //Check Capacity
    int capacityReturn(){
        return capacity;
    }
    //pop
    void pop(){
        nextIndex--;
    }
    //push
    void push(T data){
        if(nextIndex<capacity)
        {
            ar[nextIndex]=data;
            nextIndex++;
        }
        else{
            cout<<"Size Exceed So Capacity Doubled"<<endl;
            //Creating Temporary Dynamic Array
            T *newArr=new T[2*capacity];
            //Copying Elements
            for(int i=0;i<capacity;i++)
                newArr[i]=ar[i];
            //Deleteing Old Dynamically Created Array To Avoid Memory Leak
            delete []ar;
            ar=newArr;
            capacity*=2;
            ar[nextIndex]=data;
            nextIndex++;
            
        }
    }
    void print(){
        for(int i=0;i<nextIndex;i++)
            cout<<"|"<<setw(5)<<left<<ar[nextIndex-i-1]<<"|"<<endl;
        cout<<"|-----|"<<"\n\n";
    }
    ~Stack(){
        cout<<"Destructor Is Called"<<endl;
        delete []ar;
    }
};
int main(){
    cout<<"Welcome To Stack Operations"<<endl;
    Stack<char>s1(5);
    s1.push(105);
    s1.push(106);
    s1.push(107);
    s1.push(108);
    s1.push(109);
    s1.push(110);
    s1.push(111);
    s1.print();
    s1.pop();
    s1.print();
    return 0;
}
