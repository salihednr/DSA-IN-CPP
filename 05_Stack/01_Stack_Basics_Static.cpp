/*
Note:
Static Stack
Stack Is A Linear Data Structure
Stack Follows LIFO (Last In First Out)
Stack Is ADT (Abstract Data Structur) : Follows Particular Order
Operations
1. Push
2. Pop
3. Print
4. isEmpty
5. Size
*/
#include <iostream>
#include<iomanip>
using namespace std;
class stack{
    private:
    int *arr;
    int nextIndex;
    int capacity;
    public:
    //Default Constructor
    stack(){
        capacity=4;
        arr=new int[capacity];
        nextIndex=0;
    }
    //Parametrized Constructor
    stack(int cap){
        capacity=cap;
        arr = new int[capacity];
        nextIndex=0;
    }
    //Return Size
    int size(){
        return nextIndex;
    }
    //Check Stack Is Empty Or Not
    bool isEmpty(){
        return nextIndex==0;
    }
    //Push Element To The Array
    void push(int data){
        if(nextIndex<capacity)
        {    
            arr[nextIndex]=data;
            nextIndex++;
        }
        else
            cout<<"Stack OverFlow"<<endl;
    }
    //Pop Element From The Array
    void pop(){
        if(isEmpty())
            cout<<"No Element To Delete"<<endl;
        else
            nextIndex--;
        
    }
    //Printing Stack Element
    void print(){
        for(int i=0;i<nextIndex;i++)
            cout<<"|"<<setw(5)<<left<<arr[nextIndex-i-1]<<"|"<<endl;
        cout<<"|-----|"<<"\n\n";
    }
    
};
int main()
{
    stack s1(5);
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    s1.print();
    return 0;
}
